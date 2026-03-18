/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00D4AB4
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C00D4C50 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00D4948 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C00D4A60 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C00D4F4C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  __int64 v1; // rsi
  unsigned int v3; // r12d
  unsigned __int64 v4; // rdi
  __int64 v5; // rbp
  __int64 (__fastcall **v6)(QueryFontTreeRequest *); // rax
  _QWORD *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // r11d
  unsigned __int64 v11; // rbp
  unsigned int v12; // ebx
  unsigned __int64 *v13; // r9
  unsigned __int64 v14; // r8
  unsigned int v15; // r15d
  unsigned __int16 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned int v19; // edx
  int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
  {
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v23, &v22) )
    {
      v3 = v22;
      v4 = v1 + 16 * (v22 + 1LL);
      if ( v4 >= v1 + 16 )
      {
        v5 = v23;
        if ( v23 >= 16 * ((unsigned __int64)v22 + 1) )
        {
          v6 = *(__int64 (__fastcall ***)(QueryFontTreeRequest *))this;
          v7 = (_QWORD *)*((_QWORD *)this + 6);
          LOBYTE(v22) = 0;
          v8 = (*v6)(this);
          v9 = UmfdAllocation::ObtainKernelmodeAllocation(
                 v8,
                 *v7,
                 v1,
                 (unsigned int)v5,
                 &v22,
                 QueryFontTreeRequest::TryGlyphSetHasSameContent);
          if ( v9 )
          {
            if ( !(_BYTE)v22 )
              goto LABEL_22;
            *(_DWORD *)v9 = v5;
            v10 = 0;
            v11 = v1 + v5;
            *(_DWORD *)(v9 + 12) = v3;
            v12 = 0;
            if ( v3 )
            {
              v13 = (unsigned __int64 *)(v9 + 24);
              do
              {
                v14 = *v13;
                v15 = v10;
                v16 = *((_WORD *)v13 - 3);
                if ( *v13 )
                {
                  if ( !v16 )
                    goto LABEL_23;
                }
                else if ( v16 )
                {
                  goto LABEL_23;
                }
                if ( v14 )
                {
                  if ( v14 < v4 )
                    goto LABEL_23;
                  if ( v14 >= v11 )
                    goto LABEL_23;
                  v17 = 4LL * v16;
                  if ( v17 > 0xFFFFFFFF )
                    goto LABEL_23;
                  v18 = v14 + (unsigned int)v17;
                  if ( v18 < v14 || v18 > v11 )
                    goto LABEL_23;
                  v19 = v10 + v16;
                  *v13 = v9 + v14 - v1;
                  v20 = -1;
                  if ( v19 >= v10 )
                    v20 = v10 + v16;
                  v10 = v20;
                  if ( v19 < v15 )
                    goto LABEL_23;
                }
                ++v12;
                v13 += 2;
              }
              while ( v12 < v3 );
            }
            if ( v10 == *(_DWORD *)(v9 + 8) )
            {
LABEL_22:
              v21 = v9;
              v9 = 0LL;
              *((_QWORD *)this + 7) = v21;
            }
LABEL_23:
            if ( v9 )
              UmfdAllocation::ReleaseKernelmodeAllocation((char *)v9);
          }
        }
      }
    }
  }
}
