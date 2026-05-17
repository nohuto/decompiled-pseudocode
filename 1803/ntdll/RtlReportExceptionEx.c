/*
 * XREFs of RtlReportExceptionEx @ 0x1800D69F0
 * Callers:
 *     WerReportExceptionWorker @ 0x1800D79B0 (WerReportExceptionWorker.c)
 * Callees:
 *     sub_180048C9C @ 0x180048C9C (sub_180048C9C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x18009B040 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     RtlWerpReportException_0 @ 0x1800D67F0 (RtlWerpReportException_0.c)
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 *     sub_1800D7B3C @ 0x1800D7B3C (sub_1800D7B3C.c)
 *     sub_1800D7B88 @ 0x1800D7B88 (sub_1800D7B88.c)
 *     sub_1800D7BF4 @ 0x1800D7BF4 (sub_1800D7BF4.c)
 *     sub_1800D7DD8 @ 0x1800D7DD8 (sub_1800D7DD8.c)
 *     sub_1800D7E14 @ 0x1800D7E14 (sub_1800D7E14.c)
 *     sub_1800D7E44 @ 0x1800D7E44 (sub_1800D7E44.c)
 */

__int64 __fastcall RtlReportExceptionEx(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v8; // r13d
  int v9; // eax
  __int64 v10; // rdx
  struct _TEB *v11; // r8
  int v13; // ebx
  _DWORD *v14; // rcx
  _DWORD *v15; // rdx
  _OWORD *v16; // r9
  __int64 v17; // rax
  __int64 v18; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-98h]
  __int64 v21; // [rsp+58h] [rbp-90h]
  __int64 v22; // [rsp+60h] [rbp-88h]
  __int64 v23; // [rsp+68h] [rbp-80h] BYREF
  __int64 v24; // [rsp+70h] [rbp-78h] BYREF
  int v25; // [rsp+78h] [rbp-70h]
  __int64 v26; // [rsp+80h] [rbp-68h]
  _QWORD v27[4]; // [rsp+88h] [rbp-60h] BYREF

  v22 = a4;
  v26 = a5;
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v8 = sub_180048C9C(a4);
  v9 = sub_1800D7E14(a5);
  v25 = v9;
  v11 = NtCurrentTeb();
  if ( v8 == LODWORD(v11->ClientId.UniqueProcess) && v9 == LODWORD(v11->ClientId.UniqueThread) )
    return RtlReportException(a1, a2, a3);
  if ( v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    sub_1800D7B3C(a1, a2, a3);
  if ( (a3 & 4) != 0 || (v13 = sub_1800D7DD8(v22, v10, v11), v13 >= 0) )
  {
    v13 = sub_1800D7B88(&v18, v10, v11);
    if ( v13 >= 0 )
    {
      v13 = sub_1800D7BF4(&v24, &v19);
      if ( v13 >= 0 )
      {
        v13 = ZwDuplicateObject();
        if ( v13 >= 0 )
        {
          v13 = ZwDuplicateObject();
          if ( v13 >= 0 )
          {
            v14 = v19;
            *v19 = 240;
            *((_QWORD *)v14 + 21) = 1LL;
            v14[1] = v8;
            v14[2] = v25;
            *((_QWORD *)v14 + 23) = v21;
            *((_QWORD *)v14 + 24) = v20;
            *((_QWORD *)v14 + 26) = v18;
            *((_QWORD *)v14 + 27) = 0LL;
            v14[56] = -1073741823;
            v14[57] = a3;
            v15 = v19;
            v19[58] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v16 = v15 + 102;
            *((_QWORD *)v15 + 30) = 1LL;
            *((_OWORD *)v15 + 16) = *(_OWORD *)a1;
            *((_OWORD *)v15 + 17) = *(_OWORD *)(a1 + 16);
            *((_OWORD *)v15 + 18) = *(_OWORD *)(a1 + 32);
            *((_OWORD *)v15 + 19) = *(_OWORD *)(a1 + 48);
            *((_OWORD *)v15 + 20) = *(_OWORD *)(a1 + 64);
            *((_OWORD *)v15 + 21) = *(_OWORD *)(a1 + 80);
            *((_OWORD *)v15 + 22) = *(_OWORD *)(a1 + 96);
            *((_OWORD *)v15 + 23) = *(_OWORD *)(a1 + 112);
            *((_OWORD *)v15 + 24) = *(_OWORD *)(a1 + 128);
            *((_QWORD *)v15 + 50) = *(_QWORD *)(a1 + 144);
            if ( (a2 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v15 + 31) = 1LL;
              v17 = 9LL;
              do
              {
                *v16 = *(_OWORD *)a2;
                v16[1] = *(_OWORD *)(a2 + 16);
                v16[2] = *(_OWORD *)(a2 + 32);
                v16[3] = *(_OWORD *)(a2 + 48);
                v16[4] = *(_OWORD *)(a2 + 64);
                v16[5] = *(_OWORD *)(a2 + 80);
                v16[6] = *(_OWORD *)(a2 + 96);
                v16 += 8;
                *(v16 - 1) = *(_OWORD *)(a2 + 112);
                a2 += 128LL;
                --v17;
              }
              while ( v17 );
              *v16 = *(_OWORD *)a2;
              v16[1] = *(_OWORD *)(a2 + 16);
              v16[2] = *(_OWORD *)(a2 + 32);
              v16[3] = *(_OWORD *)(a2 + 48);
              v16[4] = *(_OWORD *)(a2 + 64);
            }
            else
            {
              *((_QWORD *)v15 + 31) = 2LL;
              memset(v16, 0, 0x4D0uLL);
            }
            v27[0] = v18;
            v27[1] = v24;
            v27[2] = v21;
            v27[3] = v20;
            v13 = RtlWerpReportException_0(v8, v24, v27, 4u, a3, &v23);
            if ( v13 >= 0 )
            {
              v13 = sub_1800D7E44(v22, v18, v23, 0LL);
              if ( v13 >= 0 )
              {
                if ( (a3 & 4) != 0 || (v13 = ZwTerminateProcess(), v13 >= 0) )
                  v13 = 0;
              }
            }
          }
        }
      }
    }
  }
  if ( v23 )
    ZwClose();
  if ( v19 )
    ZwUnmapViewOfSection();
  if ( v24 )
    ZwClose();
  if ( v18 )
  {
    ZwClose();
    v18 = 0LL;
  }
  if ( v20 )
    ZwClose();
  if ( v21 )
    ZwClose();
  return (unsigned int)v13;
}
