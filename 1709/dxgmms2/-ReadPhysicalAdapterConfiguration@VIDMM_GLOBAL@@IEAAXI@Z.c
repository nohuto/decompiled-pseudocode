/*
 * XREFs of ?ReadPhysicalAdapterConfiguration@VIDMM_GLOBAL@@IEAAXI@Z @ 0x1C007B1F4
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z @ 0x1C0079DD8 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAU_DXGK_QUERYSEGMENTOUT4@@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x1C001666C (DpiGetPnpRegistryKeyName.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall VIDMM_GLOBAL::ReadPhysicalAdapterConfiguration(VIDMM_GLOBAL *this, unsigned int a2)
{
  unsigned __int64 *v2; // r14
  const UNICODE_STRING *v3; // rdx
  unsigned int v4; // ebx
  unsigned int v5; // esi
  WCHAR *v6; // rdi
  unsigned int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  SIZE_T v10; // rax
  WCHAR *v11; // rax
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  PCUNICODE_STRING Source; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  void *v18; // [rsp+60h] [rbp-A0h]
  _BYTE v19[256]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v20; // [rsp+168h] [rbp+68h]
  __int64 v21; // [rsp+170h] [rbp+70h] BYREF
  int v22; // [rsp+178h] [rbp+78h]
  const wchar_t *v23; // [rsp+180h] [rbp+80h]
  unsigned int *v24; // [rsp+188h] [rbp+88h]
  int v25; // [rsp+190h] [rbp+90h]
  int *v26; // [rsp+198h] [rbp+98h]
  int v27; // [rsp+1A0h] [rbp+A0h]
  __int64 v28; // [rsp+1A8h] [rbp+A8h]
  int v29; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v30; // [rsp+1B8h] [rbp+B8h]
  unsigned int *v31; // [rsp+1C0h] [rbp+C0h]
  int v32; // [rsp+1C8h] [rbp+C8h]
  int *v33; // [rsp+1D0h] [rbp+D0h]
  int v34; // [rsp+1D8h] [rbp+D8h]
  _BYTE v35[56]; // [rsp+1E0h] [rbp+E0h] BYREF

  v2 = (unsigned __int64 *)(*((_QWORD *)this + 5021) + 1552LL * a2);
  DpiGetPnpRegistryKeyName(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2216LL) + 48LL * a2 + 8));
  v3 = Source;
  v4 = 0;
  v5 = (Source->Length >> 1) + 16;
  v18 = 0LL;
  v20 = 0;
  if ( v5 > 0x80 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v5 < 2 )
    {
      v6 = 0LL;
      goto LABEL_5;
    }
    v10 = 2LL * v5;
    if ( !is_mul_ok(v5, 2uLL) )
      v10 = -1LL;
    v11 = (WCHAR *)operator new[](v10, 0x4B677844u, PagedPool);
    v3 = Source;
    v6 = v11;
    v18 = v11;
  }
  else
  {
    v6 = (WCHAR *)v19;
    v18 = v19;
  }
  v20 = v5;
  if ( v6 )
  {
    Destination.Buffer = v6;
    Destination.MaximumLength = 2 * v5;
    Destination.Length = 0;
    RtlAppendUnicodeStringToString(&Destination, v3);
    RtlAppendUnicodeToString(&Destination, L"\\MemoryManager");
  }
LABEL_5:
  v14 = 0;
  v7 = 0;
  v12 = 0;
  v15 = 0;
  v13 = 0;
  if ( v6 )
  {
    v21 = 0LL;
    v27 = 4;
    v22 = 288;
    v29 = 288;
    v23 = L"MaxLocalSegmentSize";
    v25 = 67108868;
    v24 = &v12;
    v26 = &v14;
    v30 = L"MaxNonLocalSegmentSize";
    v31 = &v13;
    v32 = 67108868;
    v34 = 4;
    v33 = &v15;
    v28 = 0LL;
    memset(v35, 0, sizeof(v35));
    RtlQueryRegistryValuesEx(0LL, v6, &v21, 0LL, 0LL);
    v7 = v13;
    v4 = v12;
  }
  v8 = (unsigned __int64)v7 << 20;
  v9 = (unsigned __int64)v4 << 20;
  if ( v9 - 1 <= 0xFFFFFFF )
    v9 = 0x10000000LL;
  *v2 = v9;
  if ( v8 - 1 <= 0x1FFFFFFF )
    v8 = 0x20000000LL;
  v2[1] = v8;
  if ( v18 != v19 )
    operator delete(v18);
}
