/*
 * XREFs of ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x1800CD8B8
 * Callers:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800CD824 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18014BD30 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

void __fastcall CScheduleFrameInfoVolatileData::ResetTokens(CScheduleFrameInfoVolatileData *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 276); i = (unsigned int)(i + 1) )
    operator delete(*(void **)(*((_QWORD *)this + 135) + 8 * i));
  *((_DWORD *)this + 276) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1080, 8u);
}
