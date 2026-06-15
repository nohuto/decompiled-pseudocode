/*
 * XREFs of ?CloneSaDeviceParams@@YAJPEBUSaDeviceParams@@PEAPEAU1@@Z @ 0x180022D60
 * Callers:
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x18001F190 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     memcpy_0 @ 0x1800657AF (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x180097CB0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CloneSaDeviceParams(const struct SaDeviceParams *a1, struct SaDeviceParams **a2)
{
  unsigned __int128 v3; // rax
  __int64 v4; // r14
  SaDeviceParams *v5; // rbx
  const WCHAR *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v9; // r9
  int v10; // ebp
  int v11; // r10d
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  char *v14; // rsi
  __int16 v15; // cx
  unsigned __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  LPVOID v19; // rsi
  size_t v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  LPVOID v23; // rsi
  size_t v24; // rbx
  LPMALLOC ppMalloc; // [rsp+70h] [rbp+8h] BYREF
  struct SaDeviceParams **v27; // [rsp+78h] [rbp+10h]
  __int64 v28; // [rsp+80h] [rbp+18h]

  v27 = a2;
  *(_QWORD *)&v3 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( (_QWORD)v3 )
  {
    memset_0((void *)v3, 0, 0x68uLL);
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)(v4 + 24) = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = (SaDeviceParams *)v4;
  v28 = v4;
  v6 = *(const WCHAR **)a1;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  *(_QWORD *)v4 = 0LL;
  v8 = v7 + 1;
  if ( v7 + 1 >= v7 )
  {
    *(_QWORD *)v4 = 0LL;
    v3 = v8 * (unsigned __int128)2uLL;
    if ( is_mul_ok(v8, 2uLL) )
    {
      *(_QWORD *)&v3 = CoTaskMemAlloc(2 * v8);
      v9 = v3;
      *(_QWORD *)v4 = v3;
      if ( !(_QWORD)v3 )
        goto LABEL_43;
      v10 = 0;
      if ( v8 > 0x7FFFFFFF )
      {
        if ( v7 != -1LL )
LABEL_42:
          *(_WORD *)v3 = 0;
      }
      else
      {
        if ( v7 < 0x7FFFFFFF )
        {
          if ( !v6 )
          {
            v6 = &word_180133238;
            v7 = 0LL;
          }
          if ( v8 )
          {
            *(_QWORD *)&v3 = v8;
            *((_QWORD *)&v3 + 1) = v9;
            v11 = 0;
            v12 = 0LL;
            v13 = v7 - v8;
            v14 = (char *)v6 - v9;
            while ( v13 + (_QWORD)v3 )
            {
              v15 = *(_WORD *)&v14[*((_QWORD *)&v3 + 1)];
              if ( !v15 )
                break;
              **((_WORD **)&v3 + 1) = v15;
              *((_QWORD *)&v3 + 1) += 2LL;
              ++v12;
              *(_QWORD *)&v3 = v3 - 1;
              if ( !(_QWORD)v3 )
              {
                *((_QWORD *)&v3 + 1) -= 2LL;
                --v12;
                v11 = -2147024774;
                break;
              }
            }
            **((_WORD **)&v3 + 1) = 0;
            v16 = v8 - v12;
            if ( v11 >= 0 && v16 > 1 && 2 * v16 > 2 )
              memset_0((void *)(v9 + 2 * (v12 + 1)), 0, 2 * v16 - 2);
          }
          goto LABEL_20;
        }
        if ( v7 != -1LL )
          goto LABEL_42;
      }
    }
    else
    {
      v10 = -2147024362;
    }
LABEL_20:
    if ( v10 < 0 )
      goto LABEL_32;
    v17 = *((_QWORD *)a1 + 2);
    if ( !v17 )
      goto LABEL_26;
    v18 = *(unsigned __int16 *)(v17 + 16);
    v19 = CoTaskMemAlloc(v18 + 18);
    *(_QWORD *)(v4 + 16) = v19;
    if ( v19 )
    {
      v20 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v20 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v19);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset_0(*(void **)(v4 + 16), 0, v20);
      v10 = 0;
      memcpy_0(*(void **)(v4 + 16), *((const void **)a1 + 2), v18 + 18);
LABEL_26:
      v21 = *((_QWORD *)a1 + 3);
      if ( !v21 )
      {
LABEL_31:
        *(_OWORD *)(v4 + 64) = *((_OWORD *)a1 + 4);
        *(_OWORD *)(v4 + 48) = *((_OWORD *)a1 + 3);
        *(_DWORD *)(v4 + 8) = *((_DWORD *)a1 + 2);
        *(_QWORD *)(v4 + 32) = *((_QWORD *)a1 + 4);
        *(_QWORD *)(v4 + 40) = *((_QWORD *)a1 + 5);
        *(_OWORD *)(v4 + 80) = *((_OWORD *)a1 + 5);
        *(_BYTE *)(v4 + 96) = *((_BYTE *)a1 + 96);
        v5 = 0LL;
        *v27 = (struct SaDeviceParams *)v4;
        goto LABEL_32;
      }
      v22 = *(unsigned __int16 *)(v21 + 16);
      v23 = CoTaskMemAlloc(v22 + 18);
      *(_QWORD *)(v4 + 24) = v23;
      if ( v23 )
      {
        v24 = 0LL;
        if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
        {
          v24 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v23);
          ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
        }
        memset_0(*(void **)(v4 + 24), 0, v24);
        v10 = 0;
        memcpy_0(*(void **)(v4 + 24), *((const void **)a1 + 3), v22 + 18);
        goto LABEL_31;
      }
    }
LABEL_43:
    v10 = -2147024882;
    goto LABEL_32;
  }
  v10 = -2147024362;
LABEL_32:
  if ( v5 )
    SaDeviceParams::`scalar deleting destructor'(v5, DWORD2(v3));
  return (unsigned int)v10;
}
