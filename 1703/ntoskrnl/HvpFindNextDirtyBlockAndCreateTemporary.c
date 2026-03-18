/*
 * XREFs of HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E00E8
 * Callers:
 *     HvStoreModifiedData @ 0x1404B7370 (HvStoreModifiedData.c)
 * Callees:
 *     HvpFindNextDirtyRun @ 0x14006E148 (HvpFindNextDirtyRun.c)
 *     HvpMapEntryGetFreeBin @ 0x1400A80DC (HvpMapEntryGetFreeBin.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     HvViewMapCopyToFileOffset @ 0x1401E0E98 (HvViewMapCopyToFileOffset.c)
 *     HvpProtectBin @ 0x14048DBFC (HvpProtectBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140515304 (HvpPointMapEntriesToBuffer.c)
 *     HvpGetCellMap @ 0x140515540 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpFindNextDirtyBlockAndCreateTemporary(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  int v6; // ebx
  unsigned int v7; // r14d
  _BYTE *CellMap; // rcx
  __int64 FreeBin; // rax
  int v10; // edx
  _QWORD *v11; // rcx
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rdx
  ULONG_PTR v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r13
  _DWORD *v19; // rdi
  unsigned __int64 v20; // r15
  __int64 v21; // rax
  void *v22; // r15
  __int64 v23; // rax
  unsigned int v24; // edi
  unsigned int v25; // r12d
  unsigned int v27; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-34h] BYREF
  int v29; // [rsp+48h] [rbp-30h] BYREF

  if ( HvpFindNextDirtyRun(a2, a3, &v28, &v27, &v29) )
  {
    v7 = v28 << 9;
    CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, v28 << 9);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x11B4uLL);
    FreeBin = HvpMapEntryGetFreeBin(CellMap);
    if ( FreeBin )
      v13 = *(_DWORD *)(FreeBin + 20) >> 9;
    else
      v13 = v10 - (*v11 >> 9);
    if ( v13 < v27 )
    {
      while ( 1 )
      {
        v14 = v13 << 9;
        v15 = (unsigned int)v14;
        v16 = HvpGetCellMap(BugCheckParameter2, v14);
        v18 = v16;
        if ( !v16 )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v15, 0x11CCuLL);
        v19 = (_DWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0uLL);
        v20 = *(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v20 )
        {
          if ( v7 >= (unsigned int)v15 )
            v24 = v7 - v15;
          else
            v24 = 0;
          if ( v24 < *(_DWORD *)((*(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
          {
            v25 = v27 << 9;
            do
            {
              if ( v24 + (unsigned int)v15 >= v25 )
                break;
              v6 = HvViewMapCopyToFileOffset(
                     BugCheckParameter2 + 200,
                     v24 + (unsigned int)v15 + 4096,
                     v20 + v24,
                     4096LL);
              if ( v6 < 0 )
                return (unsigned int)v6;
              v24 += 4096;
            }
            while ( v24 < *(_DWORD *)(v20 + 8) );
          }
        }
        else
        {
          LOBYTE(v17) = 1;
          v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(BugCheckParameter2 + 24))(
                  *(unsigned int *)((*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8),
                  v17,
                  959794499LL);
          v22 = (void *)v21;
          if ( !v21 )
            return (unsigned int)-1073741670;
          v6 = HvpProtectBin(BugCheckParameter2, v19[2], 0, v15, v21, 1);
          if ( v6 < 0 )
          {
            (*(void (__fastcall **)(void *, _QWORD))(BugCheckParameter2 + 32))(v22, (unsigned int)v19[2]);
            return (unsigned int)v6;
          }
          memmove(v22, v19, (unsigned int)v19[2]);
          v23 = HvpMapEntryGetFreeBin((_BYTE *)v18);
          HvpPointMapEntriesToBuffer(BugCheckParameter2, v15, v23);
        }
        v13 = (unsigned int)(v15 + *(_DWORD *)(v18 + 32)) >> 9;
        if ( v13 >= v27 )
        {
          v12 = v28;
          break;
        }
      }
    }
    *a5 = (v12 + 8) << 9;
    v6 = 0;
    *a4 = v29 << 9;
  }
  else
  {
    return (unsigned int)-2147483622;
  }
  return (unsigned int)v6;
}
