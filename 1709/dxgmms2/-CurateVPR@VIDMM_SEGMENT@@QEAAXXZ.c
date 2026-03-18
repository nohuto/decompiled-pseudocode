/*
 * XREFs of ?CurateVPR@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A9DE4
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0phhhqqx @ 0x1C0023968 (McTemplateK0phhhqqx.c)
 *     McTemplateK0phhhxxqqx @ 0x1C0023A34 (McTemplateK0phhhxxqqx.c)
 *     ?PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW4VIDMM_MOVE_RESOURCES_DEFRAG_STAGE@@22W4VIDMM_DEFRAGMENT_DIRECTION@@PEA_NPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009C700 (-PrepareMoveResources@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4VIDMM_MOVE_RESOURCES_OPERATION@@I_KW.c)
 *     Percentagex100 @ 0x1C00AAF54 (Percentagex100.c)
 *     ?CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ @ 0x1C00B1A08 (-CalculateCapacity@VIDMM_LINEAR_POOL@@QEAA_KXZ.c)
 */

void __fastcall VIDMM_SEGMENT::CurateVPR(VIDMM_SEGMENT *this)
{
  bool v2; // zf
  int v3; // esi
  __int64 v4; // r11
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // r10d
  __int16 v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-38h]
  bool v28; // [rsp+80h] [rbp+8h] BYREF
  struct _VIDMM_GLOBAL_ALLOC *v29; // [rsp+88h] [rbp+10h] BYREF

  if ( !*((_BYTE *)this + 448) )
  {
    v2 = bTracingEnabled == 0;
    *((_BYTE *)this + 448) = 1;
    if ( !v2 )
    {
      if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
        LOWORD(v3) = 0;
      else
        v3 = *((_DWORD *)this + 4) + 1;
      VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        Percentagex100(*((_QWORD *)this + 55), *((_QWORD *)this + 54));
        Percentagex100((unsigned int)dword_1C0040440, (unsigned int)dword_1C0040444);
        v27 = v4;
        LOWORD(v26) = v3;
        LOWORD(v25) = *((_WORD *)this + 190);
        McTemplateK0phhhxxqqx(v6, v5, v7, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
      }
    }
    if ( *((_QWORD *)this + 55) < *((_QWORD *)this + 54)
                                * (unsigned __int64)(unsigned int)dword_1C0040440
                                / (unsigned int)dword_1C0040444 )
    {
      v8 = VIDMM_LINEAR_POOL::CalculateCapacity(*((VIDMM_LINEAR_POOL **)this + 19));
      v10 = (unsigned int)dword_1C004044C;
      v13 = v11 - v12;
      v14 = v13 * (unsigned __int64)(unsigned int)dword_1C0040448 % (unsigned int)dword_1C004044C;
      if ( v8 < v13 * (unsigned __int64)(unsigned int)dword_1C0040448 / (unsigned int)dword_1C004044C )
      {
        v29 = 0LL;
        v28 = 0;
        if ( bTracingEnabled && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          Percentagex100(v8, v13);
          Percentagex100(v15, v10);
          LODWORD(v27) = v16;
          LOWORD(v26) = v17;
          LOWORD(v25) = *((_WORD *)this + 190);
          McTemplateK0phhhqqx(v19, v18, v20, *(_QWORD *)(*((_QWORD *)this + 1) + 24LL));
        }
        v21 = VIDMM_GLOBAL::PrepareMoveResources(
                *((VIDMM_GLOBAL **)this + 1),
                v14,
                v9,
                *((_DWORD *)this + 4),
                v25,
                v26,
                *((_QWORD *)this + 52),
                *((_QWORD *)this + 53),
                v27,
                &v28,
                &v29);
        v23 = v21;
        if ( v21 < 0 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v22);
          v24[4] = v29;
          v24[3] = v23;
          v24[5] = v28;
          WdLogEvent5_WdWarning(v24);
        }
      }
    }
  }
}
