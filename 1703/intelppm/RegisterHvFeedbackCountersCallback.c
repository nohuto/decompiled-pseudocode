/*
 * XREFs of RegisterHvFeedbackCountersCallback @ 0x1C0027910
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     DecodeGenAddressToHvPerfReg @ 0x1C00271F8 (DecodeGenAddressToHvPerfReg.c)
 */

__int64 __fastcall RegisterHvFeedbackCountersCallback(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned int v3; // edx
  __int64 v4; // r8
  _BYTE *v5; // rax
  SIZE_T v6; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rsi
  int v9; // ebx
  SIZE_T v10; // rbx
  _DWORD *v11; // rax
  _DWORD *v12; // r14
  __int64 *v13; // rbx
  unsigned int v14; // ecx
  _DWORD *v15; // r15
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned int i; // r13d
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // r12
  __int64 (__fastcall *v22)(__int64, char, _QWORD *, _QWORD *); // rax
  unsigned int j; // ecx
  __int64 v24; // rax
  _DWORD *v26; // [rsp+30h] [rbp-30h]
  __int64 *v27; // [rsp+38h] [rbp-28h]
  __int64 v28; // [rsp+40h] [rbp-20h]
  int v29; // [rsp+48h] [rbp-18h] BYREF
  _DWORD *v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+58h] [rbp-8h]
  unsigned int v32; // [rsp+A0h] [rbp+40h]
  __int64 v33; // [rsp+B0h] [rbp+50h]
  __int64 v34; // [rsp+B8h] [rbp+58h]

  v2 = 0;
  v3 = *(_DWORD *)(a1 + 32);
  if ( !v3 )
    goto LABEL_40;
  v4 = v3;
  v5 = (_BYTE *)(*(_QWORD *)(a1 + 408) + 16LL);
  do
  {
    if ( v5[1] && *v5 )
      ++v2;
    v5 += 24;
    --v4;
  }
  while ( v4 );
  if ( v2 )
  {
    v6 = 24 * *(_DWORD *)(a1 + 12) * (unsigned int)v2;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      v10 = (unsigned int)(104 * *(_DWORD *)(a1 + 12));
      v11 = ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72637250u);
      v12 = v11;
      if ( v11 )
      {
        memset(v11, 0, v10);
        v13 = *(__int64 **)(a1 + 424);
        v14 = 0;
        v15 = v12;
        v28 = *(_QWORD *)(a1 + 416);
        v27 = v13;
        v26 = v8;
        v32 = 0;
        if ( *(_DWORD *)(a1 + 12) )
        {
          v16 = 0x100040000000E8LL;
          v17 = 0x100040000000E7LL;
          do
          {
            *v15 = 0;
            for ( i = 0; i < *(_DWORD *)(a1 + 32); v27 = v13 )
            {
              v19 = *(_QWORD *)(a1 + 408);
              if ( *(_BYTE *)(v19 + 24LL * i + 17) && *(_BYTE *)(v19 + 24LL * i + 16) )
              {
                v20 = *v13;
                v34 = *v13;
                v21 = &v15[6 * *v15];
                if ( *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))(*v13 + 48) == GetCpcDifferentialFeedback )
                {
                  v33 = *(_QWORD *)(v20 + 56);
                  v9 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v33 + 152), (__int64)(v21 + 4));
                  if ( v9 < 0 )
                    goto LABEL_36;
                  v9 = DecodeGenAddressToHvPerfReg((unsigned __int8 *)(v33 + 140), (__int64)(v21 + 2));
                  if ( v9 < 0 )
                    goto LABEL_36;
                  v20 = v34;
                  v13 = v27;
                  *((_BYTE *)v21 + 24) = 0;
                }
                else
                {
                  v22 = *(__int64 (__fastcall **)(__int64, char, _QWORD *, _QWORD *))(v19 + 24LL * i);
                  *((_QWORD *)v21 + 2) = v16;
                  *((_QWORD *)v21 + 1) = v17;
                  *((_BYTE *)v21 + 24) = v22 != PerfReadWrappingCounter;
                }
                v14 = v32;
                v26[1] = *(_DWORD *)(32LL * v32 + v28);
                *v26 = *v15;
                *(_QWORD *)(v20 + 56) = v26;
                *(_QWORD *)(v20 + 48) = PerfHvReadFeedback;
                ++*v15;
                v26 += 6;
              }
              ++v13;
              ++i;
            }
            ++v14;
            v15 += 26;
            v32 = v14;
          }
          while ( v14 < *(_DWORD *)(a1 + 12) );
        }
        for ( j = 0; j < *(_DWORD *)(a1 + 32); ++j )
        {
          v24 = *(_QWORD *)(a1 + 408);
          if ( *(_BYTE *)(v24 + 24LL * j + 17) && *(_BYTE *)(v24 + 24LL * j + 16) )
            *(_BYTE *)(v24 + 24LL * j + 16) = 0;
        }
        v29 = 49;
        v30 = v12;
        v31 = a1;
        if ( qword_1C0016010 )
          v9 = qword_1C0016010(&v29);
        else
          v9 = -1073741822;
        if ( v9 >= 0 )
          v8 = 0LL;
        else
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0x12u,
            (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
            v9);
      }
      else
      {
        v9 = -1073741670;
      }
LABEL_36:
      if ( v8 )
        ExFreePoolWithTag(v8, 0x72637250u);
      if ( v12 )
        ExFreePoolWithTag(v12, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
LABEL_40:
    v29 = 49;
    v30 = 0LL;
    v31 = a1;
    if ( qword_1C0016010 )
      v9 = qword_1C0016010(&v29);
    else
      v9 = -1073741822;
    if ( v9 < 0 )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x11u,
        (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
        v9);
  }
  return (unsigned int)v9;
}
