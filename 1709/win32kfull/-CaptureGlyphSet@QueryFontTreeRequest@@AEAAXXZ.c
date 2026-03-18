/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C00401B0
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z @ 0x1C0040340 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C003F700 (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z @ 0x1C0040154 (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AEAA_NPEAK0@Z.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C0040DF8 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this)
{
  char *v1; // r15
  unsigned int v3; // ebp
  unsigned __int64 v4; // r14
  __int64 v5; // rdi
  __int64 (__fastcall **v6)(QueryFontTreeRequest *); // rax
  __int64 *v7; // rbx
  unsigned int v8; // eax
  char *v9; // rax
  unsigned int v10; // ebx
  char *v11; // rdi
  unsigned int v12; // r11d
  unsigned __int64 *v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int16 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r10
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF

  v1 = (char *)*((_QWORD *)this + 11);
  if ( v1 )
  {
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v19, &v18) )
    {
      v3 = v18;
      v4 = (unsigned __int64)&v1[16 * v18 + 16];
      if ( v4 >= (unsigned __int64)(v1 + 16) )
      {
        v5 = v19;
        if ( v19 >= 16 * ((unsigned __int64)v18 + 1) )
        {
          v6 = *(__int64 (__fastcall ***)(QueryFontTreeRequest *))this;
          v7 = (__int64 *)*((_QWORD *)this + 8);
          LOBYTE(v18) = 0;
          v8 = (*v6)(this);
          v9 = UmfdAllocation::ObtainKernelmodeAllocation(
                 v8,
                 *v7,
                 v1,
                 v5,
                 &v18,
                 (__int64)QueryFontTreeRequest::TryGlyphSetHasSameContent);
          if ( v9 )
          {
            if ( !(_BYTE)v18 )
              goto LABEL_21;
            *(_DWORD *)v9 = v5;
            v10 = 0;
            v11 = &v1[v5];
            *((_DWORD *)v9 + 3) = v3;
            v12 = 0;
            if ( v3 )
            {
              v13 = (unsigned __int64 *)(v9 + 24);
              do
              {
                v14 = *v13;
                v15 = *((_WORD *)v13 - 3);
                if ( *v13 )
                {
                  if ( !v15 )
                    goto LABEL_23;
                }
                else if ( v15 )
                {
                  goto LABEL_23;
                }
                if ( v14 )
                {
                  if ( v14 < v4 )
                    goto LABEL_23;
                  if ( v14 >= (unsigned __int64)v11 )
                    goto LABEL_23;
                  v16 = 4LL * v15;
                  if ( v16 > 0xFFFFFFFF )
                    goto LABEL_23;
                  v17 = v14 + (unsigned int)v16;
                  if ( v17 < v14 )
                    goto LABEL_23;
                  if ( v17 > (unsigned __int64)v11 )
                    goto LABEL_23;
                  *v13 = (unsigned __int64)&v9[v14 - (_QWORD)v1];
                  if ( v10 + v15 < v10 )
                    goto LABEL_23;
                  v10 += v15;
                }
                ++v12;
                v13 += 2;
              }
              while ( v12 < v3 );
            }
            if ( v10 != *((_DWORD *)v9 + 2) )
LABEL_23:
              UmfdAllocation::ReleaseKernelmodeAllocation(v9);
            else
LABEL_21:
              *((_QWORD *)this + 9) = v9;
          }
        }
      }
    }
  }
}
