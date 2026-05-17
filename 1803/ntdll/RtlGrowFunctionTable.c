/*
 * XREFs of RtlGrowFunctionTable @ 0x1800DB090
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 */

signed __int64 __fastcall RtlGrowFunctionTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // esi
  int v6; // edi
  signed __int64 result; // rax
  int v8; // ecx

  v4 = a2;
  if ( *(_DWORD *)(a1 + 80) != 3 || (unsigned int)a2 < *(_DWORD *)(a1 + 84) )
    RtlRaiseStatus(-1073741811);
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, a2, a3, a4);
    v6 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 0);
    if ( v6 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v6 + 1;
    result = RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  *(_DWORD *)(a1 + 84) = v4;
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, a2, a3, a4);
    v8 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v8 - 1;
    if ( v8 == 1 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 1);
    return RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  return result;
}
