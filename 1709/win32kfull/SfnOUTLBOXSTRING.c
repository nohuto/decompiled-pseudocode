/*
 * XREFs of SfnOUTLBOXSTRING @ 0x1C00DCE70
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ClientGetListboxString @ 0x1C00DDC8C (ClientGetListboxString.c)
 */

__int64 __fastcall SfnOUTLBOXSTRING(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  unsigned int v11; // r14d
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  __int64 ThreadWin32Thread; // rax
  unsigned int ListboxString; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD v23[4]; // [rsp+50h] [rbp-28h] BYREF

  v8 = 0;
  v11 = a2;
  if ( a1 )
    v13 = *(_QWORD *)a1;
  else
    v13 = 0LL;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(v13, a2, a3, a4);
  if ( result )
  {
    v18 = *(_DWORD *)(a1 + 68);
    if ( (v18 & 0x40) == 0 && (v18 & 0x30) != 0 )
      v8 = 1;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
    v23[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v23;
    v23[1] = a1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    ListboxString = ClientGetListboxString(a1, v11, a3, a4, a5, a6, a7, v8, a8);
    ThreadUnlock1(v22, v21);
    return ListboxString;
  }
  return result;
}
