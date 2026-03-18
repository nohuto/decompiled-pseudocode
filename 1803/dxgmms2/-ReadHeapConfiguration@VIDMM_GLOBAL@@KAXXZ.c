/*
 * XREFs of ?ReadHeapConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0084D18
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@KAXXZ @ 0x1C0082A84 (-ReadConfiguration@VIDMM_GLOBAL@@KAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 */

void VIDMM_GLOBAL::ReadHeapConfiguration(void)
{
  int v0; // edx
  int v1; // eax
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+64h] [rbp-9Ch] BYREF
  int v16; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+6Ch] [rbp-94h] BYREF
  int v18; // [rsp+70h] [rbp-90h] BYREF
  int v19; // [rsp+74h] [rbp-8Ch] BYREF
  int v20; // [rsp+78h] [rbp-88h] BYREF
  int v21; // [rsp+7Ch] [rbp-84h] BYREF
  int v22; // [rsp+80h] [rbp-80h] BYREF
  int v23; // [rsp+84h] [rbp-7Ch] BYREF
  int v24; // [rsp+88h] [rbp-78h] BYREF
  int v25; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  int v27; // [rsp+98h] [rbp-68h]
  const wchar_t *v28; // [rsp+A0h] [rbp-60h]
  int *v29; // [rsp+A8h] [rbp-58h]
  int v30; // [rsp+B0h] [rbp-50h]
  int *v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+D0h] [rbp-30h]
  const wchar_t *v35; // [rsp+D8h] [rbp-28h]
  int *v36; // [rsp+E0h] [rbp-20h]
  int v37; // [rsp+E8h] [rbp-18h]
  int *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  __int64 v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  const wchar_t *v42; // [rsp+110h] [rbp+10h]
  int *v43; // [rsp+118h] [rbp+18h]
  int v44; // [rsp+120h] [rbp+20h]
  int *v45; // [rsp+128h] [rbp+28h]
  int v46; // [rsp+130h] [rbp+30h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  int v48; // [rsp+140h] [rbp+40h]
  const wchar_t *v49; // [rsp+148h] [rbp+48h]
  int *v50; // [rsp+150h] [rbp+50h]
  int v51; // [rsp+158h] [rbp+58h]
  int *v52; // [rsp+160h] [rbp+60h]
  int v53; // [rsp+168h] [rbp+68h]
  __int64 v54; // [rsp+170h] [rbp+70h]
  int v55; // [rsp+178h] [rbp+78h]
  const wchar_t *v56; // [rsp+180h] [rbp+80h]
  int *v57; // [rsp+188h] [rbp+88h]
  int v58; // [rsp+190h] [rbp+90h]
  int *v59; // [rsp+198h] [rbp+98h]
  int v60; // [rsp+1A0h] [rbp+A0h]
  __int64 v61; // [rsp+1A8h] [rbp+A8h]
  int v62; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v63; // [rsp+1B8h] [rbp+B8h]
  int *v64; // [rsp+1C0h] [rbp+C0h]
  int v65; // [rsp+1C8h] [rbp+C8h]
  int *v66; // [rsp+1D0h] [rbp+D0h]
  int v67; // [rsp+1D8h] [rbp+D8h]
  __int64 v68; // [rsp+1E0h] [rbp+E0h]
  int v69; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v70; // [rsp+1F0h] [rbp+F0h]
  int *v71; // [rsp+1F8h] [rbp+F8h]
  int v72; // [rsp+200h] [rbp+100h]
  int *v73; // [rsp+208h] [rbp+108h]
  int v74; // [rsp+210h] [rbp+110h]
  __int64 v75; // [rsp+218h] [rbp+118h]
  int v76; // [rsp+220h] [rbp+120h]
  const wchar_t *v77; // [rsp+228h] [rbp+128h]
  int *v78; // [rsp+230h] [rbp+130h]
  int v79; // [rsp+238h] [rbp+138h]
  int *v80; // [rsp+240h] [rbp+140h]
  int v81; // [rsp+248h] [rbp+148h]
  __int64 v82; // [rsp+250h] [rbp+150h]
  int v83; // [rsp+258h] [rbp+158h]
  const wchar_t *v84; // [rsp+260h] [rbp+160h]
  int *v85; // [rsp+268h] [rbp+168h]
  int v86; // [rsp+270h] [rbp+170h]
  int *v87; // [rsp+278h] [rbp+178h]
  int v88; // [rsp+280h] [rbp+180h]
  __int64 v89; // [rsp+288h] [rbp+188h]
  int v90; // [rsp+290h] [rbp+190h]
  const wchar_t *v91; // [rsp+298h] [rbp+198h]
  int *v92; // [rsp+2A0h] [rbp+1A0h]
  int v93; // [rsp+2A8h] [rbp+1A8h]
  int *v94; // [rsp+2B0h] [rbp+1B0h]
  int v95; // [rsp+2B8h] [rbp+1B8h]
  __int64 v96; // [rsp+2C0h] [rbp+1C0h]
  int v97; // [rsp+2C8h] [rbp+1C8h]
  const wchar_t *v98; // [rsp+2D0h] [rbp+1D0h]
  int *v99; // [rsp+2D8h] [rbp+1D8h]
  int v100; // [rsp+2E0h] [rbp+1E0h]
  int *v101; // [rsp+2E8h] [rbp+1E8h]
  int v102; // [rsp+2F0h] [rbp+1F0h]
  __int64 v103; // [rsp+2F8h] [rbp+1F8h]
  int v104; // [rsp+300h] [rbp+200h]
  const wchar_t *v105; // [rsp+308h] [rbp+208h]
  int *v106; // [rsp+310h] [rbp+210h]
  int v107; // [rsp+318h] [rbp+218h]
  int *v108; // [rsp+320h] [rbp+220h]
  int v109; // [rsp+328h] [rbp+228h]
  _BYTE v110[56]; // [rsp+330h] [rbp+230h] BYREF

  v0 = 256;
  v14 = 1;
  v2 = 1;
  v20 = 1;
  v8 = 1;
  v15 = 15;
  v3 = 15;
  v16 = 15;
  v4 = 15;
  v18 = 32;
  v6 = 32;
  v19 = 1024;
  v7 = 1024;
  v22 = 8;
  v10 = 8;
  v1 = 256;
  if ( (unsigned __int64)qword_1C0047168 <= 0x53333333 )
    v1 = 64;
  v17 = 4;
  v24 = v1;
  if ( (unsigned __int64)qword_1C0047168 <= 0x53333333 )
    v0 = 64;
  v12 = v1;
  v25 = v0;
  v28 = L"DebouncedPageManagement";
  v29 = &v2;
  v31 = &v14;
  v35 = L"DebouncedUnlockAge";
  v36 = &v3;
  v38 = &v15;
  v42 = L"DebouncedDecommitAge";
  v43 = &v4;
  v45 = &v16;
  v49 = L"RecycleHeapPackingThreshold";
  v50 = &v5;
  v13 = v0;
  v52 = &v17;
  v5 = 4;
  v21 = 4;
  v9 = 4;
  v23 = 64;
  v11 = 64;
  v26 = 0LL;
  v27 = 288;
  v30 = 67108868;
  v32 = 4;
  v33 = 0LL;
  v34 = 288;
  v37 = 67108868;
  v39 = 4;
  v40 = 0LL;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v54 = 0LL;
  v55 = 288;
  v56 = L"RecycleHeapPackingBlockSize";
  v62 = 288;
  v57 = &v6;
  v59 = &v18;
  v63 = L"RecycleHeapPTDBlockSize";
  v64 = &v7;
  v66 = &v19;
  v70 = L"ZeroedRecyclePages";
  v71 = &v8;
  v73 = &v20;
  v77 = L"LeanRecycleHeapPackingThreshold";
  v78 = &v9;
  v80 = &v21;
  v84 = L"LeanRecycleHeapPackingBlockSize";
  v85 = &v10;
  v87 = &v22;
  v91 = L"LeanRecycleHeapPTDBlockSize";
  v92 = &v11;
  v94 = &v23;
  v98 = L"MaximumDecommitDebounce";
  v99 = &v12;
  v101 = &v24;
  v105 = L"MaximumUnlockDebounce";
  v106 = &v13;
  v69 = 288;
  v76 = 288;
  v83 = 288;
  v90 = 288;
  v97 = 288;
  v104 = 288;
  v108 = &v25;
  v58 = 67108868;
  v60 = 4;
  v61 = 0LL;
  v65 = 67108868;
  v67 = 4;
  v68 = 0LL;
  v72 = 67108868;
  v74 = 4;
  v75 = 0LL;
  v79 = 67108868;
  v81 = 4;
  v82 = 0LL;
  v86 = 67108868;
  v88 = 4;
  v89 = 0LL;
  v93 = 67108868;
  v95 = 4;
  v96 = 0LL;
  v100 = 67108868;
  v102 = 4;
  v103 = 0LL;
  v107 = 67108868;
  v109 = 4;
  memset(v110, 0, sizeof(v110));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v26, 0LL, 0LL);
  VIDMM_GLOBAL::_Config &= ~0x200u;
  dword_1C0047358 = v2;
  dword_1C004735C = v3;
  dword_1C0047360 = v4;
  dword_1C0047364 = v5;
  dword_1C0047368 = v6;
  dword_1C004736C = v7;
  dword_1C0047370 = v8;
  dword_1C0047374 = v9;
  dword_1C0047378 = v10;
  dword_1C004737C = v11;
  dword_1C0047380 = v12;
  dword_1C0047384 = v13;
}
