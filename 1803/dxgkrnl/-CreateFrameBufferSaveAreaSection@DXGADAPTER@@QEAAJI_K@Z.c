/*
 * XREFs of ?CreateFrameBufferSaveAreaSection@DXGADAPTER@@QEAAJI_K@Z @ 0x1C0148928
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGADAPTER::CreateFrameBufferSaveAreaSection(DXGADAPTER *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = 352LL * a2;
  if ( *(_QWORD *)(*((_QWORD *)this + 295) + v4 + 56) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 9256LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v12 = a3;
  v7 = MmCreateSection(&v13, 0LL, 0LL, &v12, 4, 0x8000000, 0LL, 0LL);
  v9 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 295) + v4 + 56) = v13;
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v10 + 24) = v9;
    WdLogEvent5_WdError(v10);
  }
  return (unsigned int)v9;
}
