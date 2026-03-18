/*
 * XREFs of ?GetRealization@CManipulationTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B390
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001AD08 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CManipulationTransform::GetRealization(
        CManipulationTransform *this,
        const struct D2D_SIZE_F *a2,
        struct CMILMatrix *a3)
{
  __int128 v5; // xmm3
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  char *v8; // r9
  unsigned int v9; // r10d
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-D0h] BYREF
  char *v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+58h] [rbp-A8h]
  char *v13; // [rsp+60h] [rbp-A0h]
  __int64 v14; // [rsp+68h] [rbp-98h]
  char *v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  char *v17; // [rsp+80h] [rbp-80h]
  __int64 v18; // [rsp+88h] [rbp-78h]
  char *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h]
  char *v21; // [rsp+A0h] [rbp-60h]
  __int64 v22; // [rsp+A8h] [rbp-58h]
  char *v23; // [rsp+B0h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp-48h]
  char *v25; // [rsp+C0h] [rbp-40h]
  __int64 v26; // [rsp+C8h] [rbp-38h]
  char *v27; // [rsp+D0h] [rbp-30h]
  __int64 v28; // [rsp+D8h] [rbp-28h]
  char *v29; // [rsp+E0h] [rbp-20h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  char *v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  char *v33; // [rsp+100h] [rbp+0h]
  __int64 v34; // [rsp+108h] [rbp+8h]
  char *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  char *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  char *v39; // [rsp+130h] [rbp+30h]
  __int64 v40; // [rsp+138h] [rbp+38h]
  char *v41; // [rsp+140h] [rbp+40h]
  __int64 v42; // [rsp+148h] [rbp+48h]

  if ( *((_BYTE *)this + 264) )
  {
    CManipulationTransform::CalculateMatrixFromDelta(
      (CManipulationTransform *)((char *)this + 152),
      (CManipulationTransform *)((char *)this + 176),
      (CManipulationTransform *)((char *)this + 188),
      (CManipulationTransform *)((char *)this + 200));
    *((_BYTE *)this + 264) = 0;
  }
  v5 = *(_OWORD *)((char *)this + 216);
  v6 = *(_OWORD *)((char *)this + 232);
  v7 = *(_OWORD *)((char *)this + 248);
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 200);
  *((_OWORD *)a3 + 1) = v5;
  *((_OWORD *)a3 + 2) = v6;
  *((_OWORD *)a3 + 3) = v7;
  *((_DWORD *)a3 + 16) = 0;
  if ( dword_1802D3FE0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
    {
      v11 = v8;
      v13 = (char *)this + 204;
      v15 = (char *)this + 208;
      v17 = (char *)this + 212;
      v19 = (char *)this + 216;
      v21 = (char *)this + 220;
      v23 = (char *)this + 224;
      v25 = (char *)this + 228;
      v27 = (char *)this + 232;
      v29 = (char *)this + 236;
      v31 = (char *)this + 240;
      v33 = (char *)this + 244;
      v35 = (char *)this + 248;
      v37 = (char *)this + 252;
      v39 = (char *)this + 256;
      v41 = (char *)this + 260;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      v26 = 4LL;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8A8E, 0LL, 0LL, 0x12u, &pData);
      v9 = dword_1802D3FE0;
    }
    if ( v9 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 1uLL) )
      {
        v12 = 4LL;
        v11 = (char *)this + 152;
        v13 = (char *)this + 156;
        v15 = (char *)this + 160;
        v17 = (char *)this + 164;
        v19 = (char *)this + 168;
        v21 = (char *)this + 172;
        v23 = (char *)this + 176;
        v25 = (char *)this + 180;
        v27 = (char *)this + 184;
        v29 = (char *)this + 188;
        v31 = (char *)this + 192;
        v33 = (char *)this + 196;
        v14 = 4LL;
        v16 = 4LL;
        v18 = 4LL;
        v20 = 4LL;
        v22 = 4LL;
        v24 = 4LL;
        v26 = 4LL;
        v28 = 4LL;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A8A0F, 0LL, 0LL, 0xEu, &pData);
      }
    }
  }
}
