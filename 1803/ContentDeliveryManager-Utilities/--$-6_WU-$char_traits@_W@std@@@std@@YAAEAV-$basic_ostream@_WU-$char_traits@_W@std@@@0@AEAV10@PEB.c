/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x1800715E4
 * Callers:
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006EC24 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A34C (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180070C90 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x1800712D0 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800A53A4 (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 a1, _WORD *a2)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 v15; // r8
  __int64 v16; // rcx
  int v17; // edx
  _WORD **v18; // rcx
  unsigned __int16 *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned __int16 v22; // r8
  __int64 v23; // rcx
  int v24; // edx
  _WORD **v25; // rcx
  unsigned __int16 *v26; // rdx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rcx
  __int64 v31; // rdx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // [rsp+28h] [rbp-50h]
  int v37; // [rsp+90h] [rbp+18h]

  v2 = a1;
  v3 = 0;
  v37 = 0;
  if ( *a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *(_QWORD *)a1;
  v6 = *(int *)(*(_QWORD *)a1 + 4LL);
  v7 = *(_QWORD *)(v6 + v2 + 40);
  if ( v7 <= 0 || v7 <= v4 )
    v8 = 0LL;
  else
    v8 = v7 - v4;
  v9 = v2;
  v34 = v2;
  v10 = *(_QWORD *)(v6 + v2 + 72);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v5 = *(_QWORD *)v2;
  }
  v11 = *(int *)(v5 + 4);
  if ( !*(_DWORD *)(v11 + v2 + 16) )
  {
    v12 = *(__int64 **)(v11 + v2 + 80);
    if ( v12 )
    {
      std::wostream::flush(v12);
      v5 = *(_QWORD *)v2;
    }
  }
  v13 = *(int *)(v5 + 4);
  if ( *(_DWORD *)(v13 + v2 + 16) )
  {
    v3 = 4;
  }
  else
  {
    try
    {
      if ( (*(_DWORD *)(v13 + v2 + 24) & 0x1C0) != 0x40 )
      {
        while ( v8 > 0 )
        {
          v14 = *(int *)(*(_QWORD *)v2 + 4LL);
          v15 = *(_WORD *)(v14 + v2 + 88);
          v16 = *(_QWORD *)(v14 + v2 + 72);
          if ( **(_QWORD **)(v16 + 64) )
            v17 = **(_DWORD **)(v16 + 88);
          else
            v17 = 0;
          if ( v17 <= 0 )
          {
            v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 24LL))(v16, v15);
          }
          else
          {
            --**(_DWORD **)(v16 + 88);
            v18 = *(_WORD ***)(v16 + 64);
            v19 = (*v18)++;
            *v19 = v15;
          }
          if ( v15 == 0xFFFF )
            goto LABEL_35;
          --v8;
        }
      }
      v20 = *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 72);
      if ( (*(__int64 (__fastcall **)(__int64, _WORD *, __int64))(*(_QWORD *)v20 + 72LL))(v20, a2, v4) == v4 )
      {
        while ( v8 > 0 )
        {
          v21 = *(int *)(*(_QWORD *)v2 + 4LL);
          v22 = *(_WORD *)(v21 + v2 + 88);
          v23 = *(_QWORD *)(v21 + v2 + 72);
          if ( **(_QWORD **)(v23 + 64) )
            v24 = **(_DWORD **)(v23 + 88);
          else
            v24 = 0;
          if ( v24 <= 0 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v23 + 24LL))(v23, v22);
          }
          else
          {
            --**(_DWORD **)(v23 + 88);
            v25 = *(_WORD ***)(v23 + 64);
            v26 = (*v25)++;
            *v26 = v22;
          }
          if ( v22 == 0xFFFF )
            goto LABEL_35;
          --v8;
        }
      }
      else
      {
LABEL_35:
        v3 = 4;
        v37 = 4;
      }
      *(_QWORD *)(*(int *)(*(_QWORD *)v2 + 4LL) + v2 + 40) = 0LL;
    }
    catch ( ... )
    {
      v31 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v32 = *(_DWORD *)(v31 + 16) | 4;
      v33 = v32 & 0x17;
      *(_DWORD *)(v31 + 16) = v33;
      if ( (v33 & *(_DWORD *)(v31 + 20)) != 0 )
        throw;
      v2 = a1;
      v3 = v37;
      v9 = v34;
    }
  }
  v27 = v2 + *(int *)(*(_QWORD *)v2 + 4LL);
  if ( v3 )
  {
    v28 = v3 | *(_DWORD *)(v27 + 16);
    if ( !*(_QWORD *)(v27 + 72) )
      LOBYTE(v28) = v28 | 4;
    std::ios_base::clear((std::ios_base *)v27, v28, 0);
  }
  if ( !std::uncaught_exception() )
    std::wostream::_Osfx(v9);
  v29 = *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 4LL) + v9 + 72);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return v2;
}
