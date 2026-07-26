/*
 * XREFs of ?ndisNsiEnumerateAllIfStackEntriesFull@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0020CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfStackEntriesFull(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // si
  _QWORD *v4; // rdx
  unsigned int v5; // r8d
  PVOID *v6; // rcx
  PVOID *v7; // rax
  unsigned int v8; // ebx

  v2 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(102LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  v4 = (_QWORD *)*((_QWORD *)a1 + 2);
  v5 = *((_DWORD *)a1 + 22);
  if ( v4 && *((_DWORD *)a1 + 6) != 8
    || *((_QWORD *)a1 + 7)
    || *((_DWORD *)a1 + 16)
    || *((_QWORD *)a1 + 9)
    || *((_DWORD *)a1 + 20)
    || *((_QWORD *)a1 + 5)
    || *((_DWORD *)a1 + 12) )
  {
    v8 = -1073741306;
  }
  else if ( !v4 && v5 )
  {
    v8 = -1073741811;
  }
  else
  {
    v6 = (PVOID *)ndisIfStackEntryList;
    while ( v6 != &ndisIfStackEntryList )
    {
      v7 = v6;
      v6 = (PVOID *)*v6;
      if ( v2 < v5 )
        *v4++ = v7[2];
      ++v2;
    }
    *((_DWORD *)a1 + 22) = v2;
    v8 = v5 < v2 ? 0x105 : 0;
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(103LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, v8);
  return v8;
}
