/*
 * XREFs of ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003FBF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfFindInterface @ 0x1C00206F4 (ndisIfFindInterface.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfStackEntries(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // r14
  int *v4; // r11
  unsigned int v5; // ebp
  int v6; // esi
  struct _LIST_ENTRY *Interface; // rax
  _QWORD *v8; // r11
  struct _LIST_ENTRY *v9; // r10
  int Flink; // eax
  bool v11; // cf
  PVOID *v12; // rcx
  PVOID *v13; // rax

  v2 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x64u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  v4 = (int *)*((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 22);
  if ( v4 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v2 = -1073741306;
  }
  else if ( v4 )
  {
    v6 = *v4;
    Interface = ndisIfFindInterface(*v4);
    v9 = Interface;
    if ( Interface )
    {
      *((_DWORD *)a1 + 22) = Interface[81].Flink;
      Flink = (int)Interface[81].Flink;
      if ( Flink )
      {
        if ( v5 )
        {
          v12 = (PVOID *)ndisIfStackEntryList;
          while ( v12 != &ndisIfStackEntryList && v2 < v5 )
          {
            v13 = v12;
            v12 = (PVOID *)*v12;
            if ( *((_DWORD *)v13 + 4) == v6 )
            {
              *v8++ = v13[2];
              ++v2;
            }
          }
          v11 = v5 < LODWORD(v9[81].Flink);
        }
        else
        {
          v11 = Flink != 0;
        }
        v2 = v11 ? 0x105 : 0;
      }
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(0x65u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)a1, v2);
  return v2;
}
