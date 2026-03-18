/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x1C0020EE4
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x1C001DAA0 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetEndpointPriority @ 0x1C0020D80 (HUBUCX_GetEndpointPriority.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 a1)
{
  __int64 v1; // r13
  int v2; // edi
  _QWORD *v4; // r14
  _QWORD *i; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // eax
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD, __int64); // r12
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *j; // rax
  __int64 k; // rbp
  __int64 v19; // r8
  _QWORD *v20; // rsi
  __int64 v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+80h] [rbp+8h] BYREF
  __int64 v24; // [rsp+88h] [rbp+10h]
  __int64 v25; // [rsp+90h] [rbp+18h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x23u,
      (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids);
    return ((v2 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  v25 = *(_QWORD *)(a1 + 104);
  v24 = *(_QWORD *)(a1 + 136);
  for ( i = (_QWORD *)*v4; ; i = *(_QWORD **)(v6 + 8) )
  {
    v6 = (__int64)(i - 1);
    if ( v4 == i )
      break;
    v7 = 0LL;
    if ( *(_DWORD *)(v6 + 24) )
    {
      while ( 1 )
      {
        v8 = v6 + 72 * v7 + 40;
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
              v6 + 72 * v7 + 40);
      v2 = v12;
      if ( v12 < 0 )
      {
        LODWORD(v22) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x24u,
          (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
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
      if ( !*(_DWORD *)(a1 + 2696) || (int)HUBUCX_GetEndpointPriority(a1, v6, v6 + 72 * v7 + 40, &v23) < 0 )
        goto LABEL_19;
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
          if ( (*(_DWORD *)(v8 + 12) & 1) != 0 )
          {
            v16 = v24;
            *(_DWORD *)(v8 + 8) = 6;
            *(_QWORD *)(v16 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v15;
          }
          else
          {
            *(_QWORD *)(v25 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v15;
          }
          goto LABEL_23;
      }
LABEL_18:
      v13(*(_QWORD *)(v1 + 240), *(_QWORD *)(a1 + 24), *(_QWORD *)v8, v14);
      goto LABEL_19;
    }
LABEL_24:
    ;
  }
  for ( j = (_QWORD *)*v4; ; j = (_QWORD *)v20[1] )
  {
    v20 = j - 1;
    if ( v4 == j )
      break;
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)v20 + 6); k = (unsigned int)(k + 1) )
    {
      if ( LODWORD(v20[9 * k + 6]) == 2 )
      {
        if ( v2 >= 0 )
        {
          LODWORD(v20[9 * k + 6]) = 3;
        }
        else
        {
          v19 = v20[9 * k + 5];
          LODWORD(v20[9 * k + 6]) = 1;
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
