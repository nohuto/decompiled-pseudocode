/*
 * XREFs of ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C01AD1CC
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C01B300C (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     ?IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z @ 0x1C01A5EAC (-IsFenceObjectSignaled@@YAJIPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEAH@Z.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
        DXGDXGIKEYEDMUTEX *this,
        struct DXGCONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // rdx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v7 = *((_QWORD *)a2 + 2);
    v8 = 0;
    IsFenceObjectSignaled(*((_DWORD *)this + 26), *(struct DXGPROCESS **)(v7 + 40), a2, &v8);
    return (unsigned int)v8;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL, 0LL, a4);
    *(_QWORD *)(v5 + 24) = 632LL;
    WdLogEvent5_WdAssertion(v5);
    return 0LL;
  }
}
