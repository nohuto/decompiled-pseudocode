/*
 * XREFs of ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180168D1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x1801689F0 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTUPDATE *a3)
{
  int v3; // xmm0_4
  int v5; // xmm1_4
  unsigned int v6; // ebx
  __int64 v7; // rax
  struct ID2D1Ink *v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // r15d
  __int64 v12; // rdx
  int v13; // xmm1_4
  unsigned int v14; // r12d
  __int64 v15; // r14
  signed int ID2D1InkAndInkStyle; // eax
  __int64 v17; // rbx
  bool v18; // cf
  __int64 v19; // rax
  signed int v20; // eax
  signed int v21; // eax
  __int128 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h]
  int v25; // [rsp+50h] [rbp-10h]
  struct ID2D1InkStyle *v26; // [rsp+A0h] [rbp+40h] BYREF
  struct ID2D1Ink *v27; // [rsp+A8h] [rbp+48h] BYREF

  v27 = a2;
  v3 = *((_DWORD *)a3 + 5);
  v5 = *((_DWORD *)a3 + 3);
  v6 = 0;
  v7 = *((unsigned int *)a3 + 2);
  v8 = 0LL;
  v9 = *((_QWORD *)this + 17);
  v10 = 0;
  v26 = 0LL;
  DWORD2(v23) = v3;
  v12 = 9 * v7;
  LODWORD(v23) = v5;
  DWORD1(v23) = *((_DWORD *)a3 + 4);
  HIDWORD(v23) = *((_DWORD *)a3 + 6);
  DWORD1(v24) = *((_DWORD *)a3 + 8);
  v25 = *((_DWORD *)a3 + 11);
  LODWORD(v24) = *((_DWORD *)a3 + 7);
  v13 = *((_DWORD *)a3 + 9);
  HIDWORD(v24) = *((_DWORD *)a3 + 10);
  v27 = 0LL;
  DWORD2(v24) = v13;
  *(_OWORD *)(v9 + 4 * v12) = v23;
  *(_OWORD *)(v9 + 4 * v12 + 16) = v24;
  *(_DWORD *)(v9 + 4 * v12 + 32) = v25;
  v14 = *((_DWORD *)this + 24);
  if ( v14 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v15 + *((_QWORD *)this + 9)), &v27, &v26);
      v6 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v8 = v27;
      v17 = *((unsigned int *)a3 + 2);
      v18 = (unsigned int)v17 < (*(unsigned int (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v27 + 80LL))(v27);
      v19 = *((_QWORD *)this + 17);
      if ( v18 )
      {
        v20 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, __int64, __int64))(*(_QWORD *)v8 + 64LL))(
                v8,
                (unsigned int)v17,
                v19 + 36 * v17,
                1LL);
        v6 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xD7u);
          goto LABEL_12;
        }
      }
      else
      {
        v21 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, __int64, __int64))(*(_QWORD *)v8 + 48LL))(
                v8,
                v19 + 36 * v17,
                1LL);
        v6 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0xDEu);
          goto LABEL_12;
        }
      }
      ReleaseInterface<IBitmapLock>((__int64 *)&v27);
      ReleaseInterface<IBitmapLock>((__int64 *)&v26);
      ++v10;
      v15 += 8LL;
      if ( v10 >= v14 )
      {
        v8 = v27;
        goto LABEL_11;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, ID2D1InkAndInkStyle, 0xD2u);
    v8 = v27;
  }
  else
  {
LABEL_11:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
LABEL_12:
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v8);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v26);
  return v6;
}
