/*
 * XREFs of HmgDecrementExclusiveReferenceCountEx @ 0x1C00555D0
 * Callers:
 *     GreIntersectClipRect @ 0x1C0055340 (GreIntersectClipRect.c)
 *     GreCreateCompatibleDC @ 0x1C0055490 (GreCreateCompatibleDC.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 */

void __fastcall HmgDecrementExclusiveReferenceCountEx(struct OBJECT *a1, int a2, int *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  GdiHandleManager *v7; // rsi
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  __int64 v11; // r9
  _DWORD *v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r10
  unsigned int v19; // ebx
  unsigned int v20; // edi
  unsigned __int16 *v21; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+38h] [rbp-30h]

  *a3 = 0;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v21, a1, 0, a2, 1);
  if ( v22 )
  {
    if ( (*((_BYTE *)v21 + 15) & 8) == 0 || *((_DWORD *)a1 + 2) || (v5 = 1, *((_WORD *)a1 + 6) != 1) )
      v5 = 0;
    *a3 = v5;
    _InterlockedDecrement((volatile signed __int32 *)a1 + 3);
    v6 = *(_DWORD *)v21 & 0xFFFFFF;
    if ( v6 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v19 = *v21;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    v19,
                                    1)
             + 13) == HIWORD(v6) )
          v6 = v19;
      }
      else
      {
        v6 = *v21;
      }
    }
    v7 = gpHandleManager;
    v8 = *((_QWORD *)gpHandleManager + 2);
    v9 = *(_DWORD *)(v8 + 2056);
    if ( v6 >= v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
      goto LABEL_32;
    if ( v6 >= v9 )
      v10 = ((v6 - v9) >> 16) + 1;
    else
      v10 = 0;
    v11 = *(_QWORD *)(v8 + 8LL * v10 + 8);
    if ( v10 )
      v6 += ((1 - v10) << 16) - v9;
    if ( v6 >= *(_DWORD *)(v11 + 20) )
LABEL_32:
      v12 = 0LL;
    else
      v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                       + 16LL * (unsigned __int8)v6
                       + 8);
    v13 = (unsigned __int16)*v12;
    v14 = v13 | (*v12 >> 8) & 0xFF0000u;
    if ( (unsigned int)v14 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v20 = (unsigned __int16)v13;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v13,
                                    1)
             + 13) == WORD1(v14) )
          v14 = v20;
      }
      else
      {
        v14 = (unsigned __int16)v13;
      }
    }
    v15 = *((_QWORD *)v7 + 2);
    v16 = *(_DWORD *)(v15 + 2056);
    if ( (unsigned int)v14 < v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
    {
      if ( (unsigned int)v14 >= v16 )
        v17 = (((unsigned int)v14 - v16) >> 16) + 1;
      else
        v17 = 0;
      v18 = *(_QWORD *)(v15 + 8LL * v17 + 8);
      if ( v17 )
        v14 = ((1 - v17) << 16) - v16 + (unsigned int)v14;
      *(_DWORD *)(*(_QWORD *)v18 + 24 * v14 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)(unsigned int)v14 >> 8))
      + 16LL * (unsigned __int8)v14,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
  }
}
