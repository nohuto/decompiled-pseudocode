/*
 * XREFs of bDfbSurfacesMigrated @ 0x1C0077D90
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C0077AB0 (pProcessDfbSurfaces2.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C0031F10 (HmgShareLockCheck.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     MulFindDisplayDhsurfFromMetaSurf @ 0x1C00EFA24 (MulFindDisplayDhsurfFromMetaSurf.c)
 */

__int64 __fastcall bDfbSurfacesMigrated(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // r10d
  _QWORD *i; // rdx
  __int64 v7; // r15
  __int64 (__fastcall *v8)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *); // r11
  __int64 DisplayDhsurfFromMetaSurf; // r12
  __int64 v10; // rbx
  int v11; // r14d
  __int64 v12; // rdx
  _QWORD *v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // [rsp+90h] [rbp+8h] BYREF
  __int64 v18; // [rsp+98h] [rbp+10h]

  v2 = 0;
  if ( (*(_DWORD *)(a2 + 112) & 0x800000) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 32);
    if ( (v5 & 0x20000) != 0 )
    {
      for ( i = **(_QWORD ***)(a1 + 1816); i; i = (_QWORD *)*i )
      {
        if ( *(_DWORD *)(*(_QWORD *)(i[6] + 1808LL) + 24LL) != 1 )
          return v2;
      }
    }
    v7 = 0LL;
    if ( (*(_DWORD *)(a1 + 1840) & 0x8000000) != 0 )
      goto LABEL_28;
    v8 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *))(a1 + 3456);
    if ( !v8 )
      goto LABEL_28;
    DisplayDhsurfFromMetaSurf = *(_QWORD *)(a2 + 24);
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 48) + 32LL) & 0x20000) == 0
      || (DisplayDhsurfFromMetaSurf = MulFindDisplayDhsurfFromMetaSurf()) != 0 )
    {
      v10 = *(_QWORD *)(a2 + 56);
      v11 = *(_DWORD *)(a2 + 120);
      v17 = *(_QWORD *)(a2 + 496);
      if ( (v5 & 0x4000000) != 0 )
      {
        v12 = *(_QWORD *)(a1 + 1816);
        v18 = v12;
        v13 = *(_QWORD **)v12;
        while ( v13 && !v7 )
        {
          *(_QWORD *)(v12 + 104) = *(_QWORD *)(*(_QWORD *)(v13[7] + 2592LL) + 264LL);
          v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *))(a1 + 3456))(
                  *(_QWORD *)(a1 + 1816),
                  v10,
                  *(unsigned int *)(a2 + 96),
                  v11 | 0x10u,
                  DisplayDhsurfFromMetaSurf,
                  *(_DWORD *)(a2 + 512),
                  0,
                  &v17);
          v13 = (_QWORD *)*v13;
          v7 = v14;
          v12 = v18;
        }
      }
      else
      {
        v7 = v8(
               *(_QWORD *)(a1 + 1816),
               v10,
               *(unsigned int *)(a2 + 96),
               v11 | 0x10u,
               DisplayDhsurfFromMetaSurf,
               *(_DWORD *)(a2 + 512),
               0,
               &v17);
      }
      v15 = HmgShareLockCheck(v7, 5);
      if ( v15 )
      {
        *(_QWORD *)(a2 + 488) = v15;
        if ( (*(_DWORD *)(v15 + 116) & 0x2000) != 0 )
          *(_DWORD *)(a2 + 116) |= 0x2000u;
        *(_DWORD *)(v15 + 120) = v11;
        if ( (*(_DWORD *)(a1 + 32) & 0x20000) == 0 )
        {
          if ( (v11 & 1) != 0 )
          {
            *(_DWORD *)(v15 + 116) |= 1u;
            *(_QWORD *)(v15 + 496) = v17;
            *(_QWORD *)(v15 + 504) = *(_QWORD *)(a2 + 504);
            *(_DWORD *)(v15 + 512) = *(_DWORD *)(a2 + 512);
          }
          else if ( (v11 & 2) != 0 )
          {
            *(_DWORD *)(v15 + 116) |= 8u;
          }
          *(_DWORD *)(v15 + 112) |= 0x4804000u;
        }
        DEC_SHARE_REF_CNT((int *)v15);
      }
LABEL_28:
      LOBYTE(v2) = v7 != 0;
    }
  }
  return v2;
}
