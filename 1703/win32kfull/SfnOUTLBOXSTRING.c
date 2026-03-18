/*
 * XREFs of SfnOUTLBOXSTRING @ 0x1C00C4570
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ClientGetListboxString @ 0x1C00C51DC (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTLBOXSTRING(__int64 a1, int a2, int a3, int a4, __int64 a5, __int64 a6, int a7, __int64 a8)
{
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  int v14; // edx
  unsigned int ListboxString; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v18[4]; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 )
    v12 = *(_QWORD *)a1;
  else
    v12 = 0LL;
  result = HMValidateHandleNoSecure(v12, 1);
  if ( result )
  {
    v14 = *(_DWORD *)(a1 + 68);
    v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v18;
    ++*(_DWORD *)(a1 + 8);
    v18[1] = a1;
    ListboxString = ClientGetListboxString(
                      a1,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      a7,
                      ((v14 & 0x40) == 0) & (unsigned __int8)((v14 & 0x30) != 0),
                      a8);
    ThreadUnlock1(v17, v16);
    return ListboxString;
  }
  return result;
}
