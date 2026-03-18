/*
 * XREFs of ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0107A14
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall DXGPRESENT::CheckInput(DXGPRESENT *this, const struct _D3DKMT_PRESENT *a2, LONG a3, LONG a4)
{
  unsigned int v5; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r10d
  int v10; // ecx
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rcx
  void *v15; // rcx
  UINT SubRectCnt; // eax
  RECT SrcRect; // xmm1
  LONG right; // edx
  LONG left; // ecx
  LONG bottom; // r9d
  LONG top; // r8d
  LONG v22; // ecx
  LONG v23; // edx
  __int64 v24; // rax

  v5 = *((_DWORD *)this + 1) & 0xFFFFFFFB;
  *((_DWORD *)this + 1) = v5;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( *(_BYTE *)&Value < 0
    && ((right = a2->SrcRect.right, left = a2->SrcRect.left, right <= left)
     || (bottom = a2->SrcRect.bottom, top = a2->SrcRect.top, bottom <= top)
     || left >= a3
     || top >= a4
     || right <= 0
     || bottom <= 0)
    || (*(_BYTE *)&Value & 0x40) != 0
    && ((v22 = a2->DstRect.right, v22 <= a2->DstRect.left)
     || (v23 = a2->DstRect.bottom, v23 <= a2->DstRect.top)
     || v22 <= 0
     || v23 <= 0) )
  {
    *((_DWORD *)this + 1) = v5 | 4;
    return 0LL;
  }
  v10 = *((_DWORD *)this + 18);
  if ( v10 == Value
    && *((_DWORD *)this + 19) == a3
    && *((_DWORD *)this + 20) == a4
    && *((_DWORD *)this + 29) == a2->SubRectCnt
    && ((v10 & 0x80u) == 0 || RtlCompareMemory((char *)this + 100, &a2->SrcRect, 0x10uLL) == 16)
    && ((*((_DWORD *)this + 18) & 0x40) == 0 || RtlCompareMemory((char *)this + 84, &a2->DstRect, 0x10uLL) == 16)
    && 16LL * *((unsigned int *)this + 29) == RtlCompareMemory(
                                                *((const void **)this + 15),
                                                a2->pSrcSubRects,
                                                16LL * *((unsigned int *)this + 29)) )
  {
    return 0LL;
  }
  if ( *((_DWORD *)this + 29) >= a2->SubRectCnt )
    goto LABEL_18;
  operator delete[](*((void **)this + 15));
  v12 = 16LL * a2->SubRectCnt;
  if ( !is_mul_ok(a2->SubRectCnt, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 15) = v13;
  if ( v13 )
  {
LABEL_18:
    if ( *((_DWORD *)this + 19) != a3 || *((_DWORD *)this + 20) != a4 )
    {
      *((_DWORD *)this + 1) |= 0x40u;
      *((_DWORD *)this + 19) = a3;
      *((_DWORD *)this + 20) = a4;
    }
    v15 = (void *)*((_QWORD *)this + 15);
    *((_DWORD *)this + 18) = a2->Flags.0;
    SubRectCnt = a2->SubRectCnt;
    *((_DWORD *)this + 29) = SubRectCnt;
    memmove(v15, a2->pSrcSubRects, 16LL * SubRectCnt);
    *(RECT *)((char *)this + 84) = a2->DstRect;
    SrcRect = a2->SrcRect;
    *((_DWORD *)this + 1) |= 8u;
    *(RECT *)((char *)this + 100) = SrcRect;
    return 0LL;
  }
  *((_DWORD *)this + 29) = 0;
  v24 = WdLogNewEntry5_WdLowResource(v14);
  *(_QWORD *)(v24 + 24) = this;
  *(_QWORD *)(v24 + 32) = a2->SubRectCnt;
  WdLogEvent5_WdLowResource(v24);
  return 3221225495LL;
}
