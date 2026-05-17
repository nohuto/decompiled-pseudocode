/*
 * XREFs of RtlReportExceptionEx @ 0x1800DD4D0
 * Callers:
 *     WerReportExceptionWorker @ 0x1800DE1D0 (WerReportExceptionWorker.c)
 * Callees:
 *     RtlWerpReportException_0 @ 0x180003BD8 (RtlWerpReportException_0.c)
 *     sub_180070674 @ 0x180070674 (sub_180070674.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1800DE274 @ 0x1800DE274 (sub_1800DE274.c)
 *     sub_1800DE2C0 @ 0x1800DE2C0 (sub_1800DE2C0.c)
 *     sub_1800DE334 @ 0x1800DE334 (sub_1800DE334.c)
 *     sub_1800DE4A0 @ 0x1800DE4A0 (sub_1800DE4A0.c)
 *     sub_1800DE578 @ 0x1800DE578 (sub_1800DE578.c)
 *     sub_1800DE5B4 @ 0x1800DE5B4 (sub_1800DE5B4.c)
 *     sub_1800DE5E4 @ 0x1800DE5E4 (sub_1800DE5E4.c)
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
  __int64 v18; // [rsp+40h] [rbp-528h] BYREF
  __int64 v19; // [rsp+48h] [rbp-520h]
  _DWORD *v20; // [rsp+50h] [rbp-518h] BYREF
  __int64 v21; // [rsp+58h] [rbp-510h]
  __int64 v22; // [rsp+60h] [rbp-508h]
  __int64 v23; // [rsp+68h] [rbp-500h] BYREF
  __int64 v24; // [rsp+70h] [rbp-4F8h] BYREF
  int v25; // [rsp+78h] [rbp-4F0h]
  int v26; // [rsp+7Ch] [rbp-4ECh]
  __int64 v27; // [rsp+80h] [rbp-4E8h]
  _BYTE v28[1136]; // [rsp+90h] [rbp-4D8h] BYREF
  _QWORD v29[4]; // [rsp+500h] [rbp-68h] BYREF

  v19 = a4;
  v27 = a5;
  v22 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  v8 = sub_180070674(a4);
  v9 = sub_1800DE5B4(a5);
  v25 = v9;
  v11 = NtCurrentTeb();
  if ( v8 == LODWORD(v11->ClientId.UniqueProcess) && v9 == LODWORD(v11->ClientId.UniqueThread) )
    return RtlReportException(a1, a2, a3);
  if ( v8 == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    sub_1800DE274(a1, a2, a3);
  if ( (a3 & 4) != 0 || (v13 = sub_1800DE578(v19, v10, v11), v13 >= 0) )
  {
    v13 = sub_1800DE2C0(&v18, v10, v11);
    if ( v13 >= 0 )
    {
      v26 = sub_1800DE4A0(v19, v28);
      v13 = sub_1800DE334(&v24, &v20);
      if ( v13 >= 0 )
      {
        v13 = ZwDuplicateObject();
        if ( v13 >= 0 )
        {
          v13 = ZwDuplicateObject();
          if ( v13 >= 0 )
          {
            v14 = v20;
            *v20 = 248;
            *((_QWORD *)v14 + 21) = 1LL;
            v14[1] = v8;
            v14[2] = v25;
            *((_QWORD *)v14 + 23) = v22;
            *((_QWORD *)v14 + 24) = v21;
            *((_QWORD *)v14 + 26) = v18;
            *((_QWORD *)v14 + 28) = v28;
            v14[58] = v26;
            v14[59] = a3 | 0x40000000;
            v15 = v20;
            v20[60] = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
            v16 = v15 + 104;
            *((_QWORD *)v15 + 31) = 1LL;
            *(_OWORD *)(v15 + 66) = *(_OWORD *)a1;
            *(_OWORD *)(v15 + 70) = *(_OWORD *)(a1 + 16);
            *(_OWORD *)(v15 + 74) = *(_OWORD *)(a1 + 32);
            *(_OWORD *)(v15 + 78) = *(_OWORD *)(a1 + 48);
            *(_OWORD *)(v15 + 82) = *(_OWORD *)(a1 + 64);
            *(_OWORD *)(v15 + 86) = *(_OWORD *)(a1 + 80);
            *(_OWORD *)(v15 + 90) = *(_OWORD *)(a1 + 96);
            *(_OWORD *)(v15 + 94) = *(_OWORD *)(a1 + 112);
            *(_OWORD *)(v15 + 98) = *(_OWORD *)(a1 + 128);
            *((_QWORD *)v15 + 51) = *(_QWORD *)(a1 + 144);
            if ( (a2 & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
            {
              *((_QWORD *)v15 + 32) = 1LL;
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
              *((_QWORD *)v15 + 32) = 2LL;
              memset(v16, 0, 0x4D0uLL);
            }
            v29[0] = v18;
            v29[1] = v24;
            v29[2] = v22;
            v29[3] = v21;
            v13 = RtlWerpReportException_0(v8, v24, (__int64)v29, 4u, a3, &v23);
            if ( v13 >= 0 )
            {
              v13 = sub_1800DE5E4(v19, v18, v23, 0LL);
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
  if ( v20 )
    ZwUnmapViewOfSection();
  if ( v24 )
    ZwClose();
  if ( v18 )
  {
    ZwClose();
    v18 = 0LL;
  }
  if ( v21 )
    ZwClose();
  if ( v22 )
    ZwClose();
  return (unsigned int)v13;
}
