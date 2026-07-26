/*
 * XREFs of ?ndisNsiEnumerateAllIfStackEntries@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfFindInterface @ 0x1C001B8E4 (ndisIfFindInterface.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfStackEntries(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // r14d
  KIRQL v4; // r15
  int *v5; // r11
  unsigned int v6; // esi
  int v7; // ebp
  struct _LIST_ENTRY *Interface; // rax
  _QWORD *v9; // r11
  struct _LIST_ENTRY *v10; // r10
  int Flink; // eax
  PVOID *v12; // rcx
  PVOID *v13; // rax

  v1 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(0x64u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  v5 = (int *)*((_QWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 22);
  if ( v5 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v1 = -1073741306;
  }
  else if ( v5 )
  {
    v7 = *v5;
    Interface = ndisIfFindInterface(*v5);
    v10 = Interface;
    if ( Interface )
    {
      *((_DWORD *)a1 + 22) = Interface[81].Flink;
      Flink = (int)Interface[81].Flink;
      if ( Flink )
      {
        if ( v6 )
        {
          v12 = (PVOID *)ndisIfStackEntryList;
          while ( v12 != &ndisIfStackEntryList && v3 < v6 )
          {
            v13 = v12;
            v12 = (PVOID *)*v12;
            if ( *((_DWORD *)v13 + 4) == v7 )
            {
              *v9++ = v13[2];
              ++v3;
            }
          }
          if ( LODWORD(v10[81].Flink) > v6 )
            v1 = 261;
        }
        else
        {
          v1 = Flink != 0 ? 0x105 : 0;
        }
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(0x65u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, (__int64)a1, v1);
  return v1;
}
