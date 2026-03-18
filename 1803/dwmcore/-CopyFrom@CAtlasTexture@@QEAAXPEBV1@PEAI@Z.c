/*
 * XREFs of ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801EBE80
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801E77FC (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x180013298 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180019928 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801DF1EC (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801EC124 (-IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801EC14C (-IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 */

void __fastcall CAtlasTexture::CopyFrom(CAtlasTexture *this, const struct CAtlasTexture *a2, unsigned int *a3)
{
  unsigned int *v4; // rdi
  const struct CAtlasTexture *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // r14d
  unsigned int v9; // r10d
  unsigned int v10; // r15d
  unsigned int i; // r12d
  int v12; // r10d
  struct CD3DTexture *v13; // rbx
  struct CD3DTexture *v14; // rdi
  CD3DDeviceLevel1 *Device; // rax
  unsigned int v16; // ecx
  unsigned int v17; // esi
  unsigned int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct CD3DTexture *v22; // [rsp+30h] [rbp-38h] BYREF
  struct CD3DTexture *v23; // [rsp+38h] [rbp-30h] BYREF
  struct tagPOINT v24; // [rsp+40h] [rbp-28h] BYREF
  struct tagRECT si128; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+60h]

  v23 = 0LL;
  v22 = 0LL;
  v4 = a3;
  v5 = a2;
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v23);
  (*(void (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)v5 + 1) + 240LL))(*((_QWORD *)v5 + 1), &v23);
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v22);
  (*(void (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 1) + 240LL))(*((_QWORD *)this + 1), &v22);
  v6 = *((_DWORD *)v5 + 6) + 1;
  v24.x = 0;
  v24.y = 0;
  v7 = *v4;
  v28 = v6;
  si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
  if ( v7 < v6 )
  {
    v8 = v7 != 0;
    while ( 1 )
    {
      if ( CAtlasTexture::IsInUseEntryInRow(v5, v7) )
      {
        while ( v8 < v9 && !CAtlasTexture::IsFreeEntryInRow(this, v8) )
          ++v8;
        v10 = 0;
        for ( i = v7; CAtlasTexture::IsInUseEntryInRow(v5, i) && CAtlasTexture::IsFreeEntryInRow(this, v12 + i); ++i )
          ++v10;
        if ( !v10 )
        {
LABEL_6:
          v4 = a3;
          break;
        }
        v13 = v22;
        v14 = v23;
        si128.bottom = v10 + v7;
        si128.top = v7;
        v24.y = v8;
        Device = CAtlasTexture::GetDevice(this);
        CD3DDeviceLevel1::CopyTextureRect(Device, v14, &si128, v13, &v24);
        v5 = a2;
        v16 = v7 == 0;
        if ( v16 < v10 )
        {
          v17 = v7 - v8;
          v18 = v16 + v8;
          v19 = v10 - v16;
          do
          {
            v20 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * (v17 + v18 - 1));
            v21 = v18 - 1;
            *(_DWORD *)(v20 + 16) = v18++;
            *(_QWORD *)v20 = this;
            *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v21) = v20;
            --*((_DWORD *)this + 7);
            --v19;
          }
          while ( v19 );
        }
        v7 = i;
        v8 += v10;
      }
      else
      {
        ++v7;
      }
      if ( v7 >= v28 )
        goto LABEL_6;
    }
  }
  *v4 = v7;
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v23);
}
