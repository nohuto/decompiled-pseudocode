/*
 * XREFs of NVMeCompleteSubmissionQueueRequests @ 0x1C0004F18
 * Callers:
 *     NVMeHwUnitControl @ 0x1C0001F30 (NVMeHwUnitControl.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0005038 (NVMeControllerCompleteAllIORequests.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00026E0 (NVMeRequestComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C0011F50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NVMeCompleteSubmissionQueueRequests(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        char a5,
        char a6,
        char a7)
{
  __int64 v9; // rbp
  __int64 v11; // rdi
  __int64 v12; // rbx
  char v13; // r9
  int v14; // r8d
  unsigned int v15; // edx
  __int64 v16; // rax
  void (__fastcall *v17)(__int64, __int64, _QWORD); // rax

  if ( a3 )
  {
    v9 = a3;
    v11 = 0LL;
    do
    {
      v12 = _InterlockedExchange64((volatile __int64 *)(v11 + *(_QWORD *)(a2 + 32)), 0LL);
      if ( v12 )
      {
        v13 = *(_BYTE *)(v12 + 2);
        if ( v13 == 40 )
          v14 = *(unsigned __int8 *)(*(unsigned int *)(v12 + 52) + v12 + 10);
        else
          v14 = *(unsigned __int8 *)(v12 + 7);
        if ( a6 == 1 )
        {
          if ( v12 != a1 + 568 )
          {
            v15 = 0;
            while ( v12 != 104LL * v15 + a1 + 672 )
            {
              if ( ++v15 >= 4 )
                goto LABEL_12;
            }
          }
        }
        else
        {
LABEL_12:
          if ( a5 == 1 || a4 == v14 )
          {
            if ( v13 == 40 )
              v16 = *(_QWORD *)(v12 + 104);
            else
              v16 = *(_QWORD *)(v12 + 56);
            if ( (v16 & 0xFFF) != 0 )
              v16 = v16 - (v16 & 0xFFF) + 4096;
            *(_BYTE *)(v12 + 3) = a7;
            v17 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v16 + 4216);
            if ( v17 )
              v17(a1, v12, 0LL);
            NVMeRequestComplete(a1, v12);
          }
        }
      }
      v11 += 16LL;
      --v9;
    }
    while ( v9 );
  }
}
