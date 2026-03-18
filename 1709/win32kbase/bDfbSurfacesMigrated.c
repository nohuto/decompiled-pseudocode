/*
 * XREFs of bDfbSurfacesMigrated @ 0x1C006DA10
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C006CF70 (pProcessDfbSurfaces2.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockCheck @ 0x1C004D5B0 (HmgShareLockCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     MulFindDisplayDhsurfFromMetaSurf @ 0x1C00F26E4 (MulFindDisplayDhsurfFromMetaSurf.c)
 */

__int64 __fastcall bDfbSurfacesMigrated(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // r10d
  struct HOBJ__ *v6; // r15
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *); // r11
  __int64 DisplayDhsurfFromMetaSurf; // r12
  __int64 v9; // rbx
  int v10; // r14d
  __int64 v11; // rax
  _QWORD *i; // rdx
  __int64 v14; // rdx
  _QWORD *v15; // r13
  __int64 v16; // rax
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
    v6 = 0LL;
    if ( (*(_DWORD *)(a1 + 1840) & 0x8000000) != 0 )
      goto LABEL_16;
    v7 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *))(a1 + 3456);
    if ( !v7 )
      goto LABEL_16;
    DisplayDhsurfFromMetaSurf = *(_QWORD *)(a2 + 24);
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 48) + 32LL) & 0x20000) == 0
      || (DisplayDhsurfFromMetaSurf = MulFindDisplayDhsurfFromMetaSurf()) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 56);
      v10 = *(_DWORD *)(a2 + 120);
      v17 = *(_QWORD *)(a2 + 496);
      if ( (v5 & 0x4000000) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 1816);
        v18 = v14;
        v15 = *(_QWORD **)v14;
        while ( v15 && !v6 )
        {
          *(_QWORD *)(v14 + 104) = *(_QWORD *)(*(_QWORD *)(v15[7] + 2592LL) + 264LL);
          v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64, _DWORD, _DWORD, __int64 *))(a1 + 3456))(
                  *(_QWORD *)(a1 + 1816),
                  v9,
                  *(unsigned int *)(a2 + 96),
                  v10 | 0x10u,
                  DisplayDhsurfFromMetaSurf,
                  *(_DWORD *)(a2 + 512),
                  0,
                  &v17);
          v15 = (_QWORD *)*v15;
          v6 = (struct HOBJ__ *)v16;
          v14 = v18;
        }
      }
      else
      {
        v6 = (struct HOBJ__ *)v7(
                                *(_QWORD *)(a1 + 1816),
                                v9,
                                *(unsigned int *)(a2 + 96),
                                v10 | 0x10u,
                                DisplayDhsurfFromMetaSurf,
                                *(_DWORD *)(a2 + 512),
                                0,
                                &v17);
      }
      v11 = HmgShareLockCheck(v6, 5);
      if ( v11 )
      {
        *(_QWORD *)(a2 + 488) = v11;
        if ( (*(_DWORD *)(v11 + 116) & 0x2000) != 0 )
          *(_DWORD *)(a2 + 116) |= 0x2000u;
        *(_DWORD *)(v11 + 120) = v10;
        if ( (*(_DWORD *)(a1 + 32) & 0x20000) == 0 )
        {
          if ( (v10 & 1) != 0 )
          {
            *(_DWORD *)(v11 + 116) |= 1u;
            *(_QWORD *)(v11 + 496) = v17;
            *(_QWORD *)(v11 + 504) = *(_QWORD *)(a2 + 504);
            *(_DWORD *)(v11 + 512) = *(_DWORD *)(a2 + 512);
          }
          else if ( (v10 & 2) != 0 )
          {
            *(_DWORD *)(v11 + 116) |= 8u;
          }
          *(_DWORD *)(v11 + 112) |= 0x4804000u;
        }
        HmgDecrementShareReferenceCountEx((struct OBJECT *)v11, 0LL);
      }
LABEL_16:
      LOBYTE(v2) = v6 != 0LL;
    }
  }
  return v2;
}
