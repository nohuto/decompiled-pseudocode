/*
 * XREFs of ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801B3844
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801AE740 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180081A04 (-InternalRelease@-$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x18008B9A8 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801A63E4 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801B3AEC (-IsFreeEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 *     ?IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z @ 0x1801B3B14 (-IsInUseEntryInRow@CAtlasTexture@@QEBA_NI@Z.c)
 */

void __fastcall CAtlasTexture::CopyFrom(CAtlasTexture *this, const struct CAtlasTexture *a2, unsigned int *a3)
{
  unsigned int *v4; // rdi
  const struct CAtlasTexture *v5; // rbx
  unsigned int v6; // r15d
  unsigned int v7; // esi
  unsigned int v8; // r10d
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  unsigned int i; // r10d
  unsigned int v12; // r10d
  int v13; // r10d
  struct CD3DTexture *v14; // rbx
  struct CD3DTexture *v15; // rdi
  CD3DDeviceLevel1 *Device; // rax
  unsigned int v17; // ecx
  int v18; // r8d
  unsigned __int64 v19; // r9
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
  (*(void (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)v5 + 1) + 200LL))(*((_QWORD *)v5 + 1), &v23);
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v22);
  (*(void (__fastcall **)(_QWORD, struct CD3DTexture **))(**((_QWORD **)this + 1) + 200LL))(*((_QWORD *)this + 1), &v22);
  v24.x = 0;
  v24.y = 0;
  v6 = *v4;
  v28 = *((_DWORD *)v5 + 6) + 1;
  v7 = *v4 != 0;
  si128 = (struct tagRECT)_mm_load_si128((const __m128i *)&_xmm);
  if ( v6 < v28 )
  {
    while ( 1 )
    {
      if ( CAtlasTexture::IsInUseEntryInRow(v5, v6) )
      {
        while ( v7 < v8 && !CAtlasTexture::IsFreeEntryInRow(this, v7) )
          ++v7;
        v9 = 0;
        v10 = v6 - v7;
        for ( i = v7;
              CAtlasTexture::IsInUseEntryInRow(v5, v10 + i) && CAtlasTexture::IsFreeEntryInRow(this, v12);
              i = v13 + 1 )
        {
          ++v9;
        }
        if ( !v9 )
        {
LABEL_5:
          v4 = a3;
          break;
        }
        v14 = v22;
        v15 = v23;
        si128.bottom = v9 + v6;
        si128.top = v6;
        v24.y = v7;
        Device = CAtlasTexture::GetDevice(this);
        CD3DDeviceLevel1::CopyTextureRect(Device, v15, &si128, v14, &v24);
        v5 = a2;
        v17 = v6 == 0;
        if ( v17 < v9 )
        {
          v18 = v17 + v7;
          v19 = (__PAIR64__(v9, v6) - 1) >> 32;
          do
          {
            v20 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 8LL * (v18 + v10 - 1));
            v21 = (unsigned int)(v18 - 1);
            *(_DWORD *)(v20 + 16) = v18++;
            *(_QWORD *)v20 = this;
            *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v21) = v20;
            --*((_DWORD *)this + 7);
            --v19;
          }
          while ( v19 );
        }
        v7 += v9;
      }
      else
      {
        v9 = 1;
      }
      v6 += v9;
      if ( v6 >= v28 )
        goto LABEL_5;
    }
  }
  *v4 = v6;
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v22);
  Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(&v23);
}
