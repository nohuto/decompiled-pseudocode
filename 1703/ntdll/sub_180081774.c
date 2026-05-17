/*
 * XREFs of sub_180081774 @ 0x180081774
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x180081820 (RtlCreateTagHeap.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 */

__int64 sub_180081774()
{
  int TagHeap; // eax
  __int64 result; // rax
  struct _PEB *v2; // rax
  _DWORD v3[262]; // [rsp+20h] [rbp-418h] BYREF
  unsigned int v4; // [rsp+440h] [rbp+8h] BYREF

  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap);
  v4 = 0;
  dword_18015C000 = TagHeap;
  result = ZwQuerySystemInformation(55LL, v3, 1032LL, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 < 4 )
    {
      return 3221225701LL;
    }
    else
    {
      dword_18015BFF0 = v3[0] + 1;
      v2 = NtCurrentPeb();
      v2[1].Mutant = 0LL;
      v2 = (struct _PEB *)((char *)v2 + 912);
      v2->Mutant = v2;
      *(_QWORD *)&v2->InheritedAddressSpace = v2;
      return 0LL;
    }
  }
  return result;
}
