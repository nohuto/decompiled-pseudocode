/*
 * XREFs of ?CachedVisualImageUpdate@CChannel@@UEAAJIAEBUMilRectF@@AEBUMilSizeD@@IIIW4Enum@MilBrushMappingMode@@@Z @ 0x180080390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18007F27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180082D38 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CChannel::CachedVisualImageUpdate(
        __int64 a1,
        int a2,
        __int128 *a3,
        __int128 *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  unsigned int v14; // ebx
  int v16; // [rsp+20h] [rbp-50h] BYREF
  int v17; // [rsp+24h] [rbp-4Ch] BYREF
  __int128 v18; // [rsp+28h] [rbp-48h]
  __int128 v19; // [rsp+38h] [rbp-38h]
  int v20; // [rsp+48h] [rbp-28h]
  int v21; // [rsp+4Ch] [rbp-24h]
  int v22; // [rsp+50h] [rbp-20h]
  int v23; // [rsp+54h] [rbp-1Ch]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+90h] [rbp+20h] BYREF

  v24 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v16 = 201;
  memset_0(&v17, 0, 0x44uLL);
  v12 = *a3;
  v20 = a5;
  v13 = *a4;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  v17 = a2;
  v18 = v12;
  v19 = v13;
  v14 = CChannel::SendCommand((CChannel *)a1, &v16, 0x48u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return v14;
}
