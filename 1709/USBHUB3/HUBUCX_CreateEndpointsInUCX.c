/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x1C00203E8
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x1C001D170 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetEndpointPriority @ 0x1C0020284 (HUBUCX_GetEndpointPriority.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 a1)
{
  __int64 v1; // r13
  int v2; // edi
  __int64 *v4; // r15
  __int64 i; // rsi
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, __int64); // r13
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 j; // rsi
  __int64 k; // rbp
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v22; // [rsp+28h] [rbp-60h]
  int v23; // [rsp+90h] [rbp+8h] BYREF
  __int64 v24; // [rsp+98h] [rbp+10h]
  __int64 v25; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v24 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x23u,
      (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids);
    return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = (__int64 *)(*(_QWORD *)(a1 + 48) + 16LL);
  v26 = *(_QWORD *)(a1 + 104);
  v25 = *(_QWORD *)(a1 + 136);
  for ( i = *v4; ; i = *(_QWORD *)(v6 + 8) )
  {
    v6 = i - 8;
    if ( v4 == (__int64 *)(v6 + 8) )
      break;
    v7 = 0LL;
    if ( *(_DWORD *)(v6 + 24) )
    {
      while ( 1 )
      {
        v8 = v6 + 8 * ((unsigned int)v7 + 8 * v7 + 5);
        if ( *(_DWORD *)(v8 + 8) == 1 )
          break;
LABEL_23:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 24) )
          goto LABEL_24;
      }
      v9 = *(_QWORD *)(v8 + 48);
      v10 = *(unsigned int *)(v8 + 40);
      v11 = *(_QWORD *)(v8 + 32);
      *(_DWORD *)(v8 + 8) = 2;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(v1 + 440))(
              *(_QWORD *)(v1 + 240),
              *(_QWORD *)(a1 + 24),
              v11,
              v10,
              v9,
              v6 + 8 * ((unsigned int)v7 + 8 * v7 + 5));
      v2 = v12;
      if ( v12 < 0 )
      {
        LODWORD(v22) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x24u,
          (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids,
          v22);
        *(_DWORD *)(v8 + 8) = 1;
        break;
      }
      v13 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v1 + 584);
      if ( !v13 )
        goto LABEL_20;
      v14 = *(unsigned int *)(v8 + 64);
      if ( (_DWORD)v14 )
        goto LABEL_18;
      if ( !*(_DWORD *)(a1 + 2688)
        || (int)HUBUCX_GetEndpointPriority(a1, v6, v6 + 8 * ((unsigned int)v7 + 8 * v7 + 5), &v23) < 0 )
      {
        goto LABEL_19;
      }
      switch ( v23 )
      {
        case 1:
          v14 = 1LL;
          break;
        case 2:
          v14 = 2LL;
          break;
        case 3:
          v14 = 3LL;
          break;
        default:
LABEL_19:
          v2 = 0;
LABEL_20:
          v15 = *(_QWORD *)v8;
          v1 = v24;
          if ( (*(_DWORD *)(v8 + 12) & 1) != 0 )
          {
            v16 = v25;
            *(_DWORD *)(v8 + 8) = 6;
            *(_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v15;
          }
          else
          {
            *(_QWORD *)(v26 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v15;
          }
          goto LABEL_23;
      }
LABEL_18:
      v13(*(_QWORD *)(v24 + 240), *(_QWORD *)(a1 + 24), *(_QWORD *)v8, v14);
      goto LABEL_19;
    }
LABEL_24:
    ;
  }
  for ( j = *v4; ; j = *(_QWORD *)(v20 + 8) )
  {
    v20 = j - 8;
    if ( v4 == (__int64 *)(v20 + 8) )
      break;
    for ( k = 0LL; (unsigned int)k < *(_DWORD *)(v20 + 24); k = (unsigned int)(k + 1) )
    {
      if ( *(_DWORD *)(v20 + 72 * k + 48) == 2 )
      {
        if ( v2 >= 0 )
        {
          *(_DWORD *)(v20 + 72 * k + 48) = 3;
        }
        else
        {
          v19 = *(_QWORD *)(v20 + 72 * k + 40);
          *(_DWORD *)(v20 + 72 * k + 48) = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v1 + 448))(*(_QWORD *)(v1 + 240), *(_QWORD *)(a1 + 24), v19);
        }
      }
    }
  }
  if ( v2 < 0 )
  {
    *(_DWORD *)(a1 + 112) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 1564) = -1073737728;
    *(_DWORD *)(a1 + 1560) = -1073741670;
  }
  return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
}
