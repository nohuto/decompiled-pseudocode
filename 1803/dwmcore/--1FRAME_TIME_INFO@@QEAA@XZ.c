/*
 * XREFs of ??1FRAME_TIME_INFO@@QEAA@XZ @ 0x18013FCD0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall FRAME_TIME_INFO::~FRAME_TIME_INFO(FRAME_TIME_INFO *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 12); i = (unsigned int)(i + 1) )
    operator delete(*(void **)(*((_QWORD *)this + 3) + 8 * i));
  *((_DWORD *)this + 12) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 24, 8u);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 24);
}
