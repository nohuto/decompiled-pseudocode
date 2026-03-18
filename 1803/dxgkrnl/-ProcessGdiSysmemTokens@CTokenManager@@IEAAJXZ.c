/*
 * XREFs of ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C00178D8
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C0010230 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0010B70 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C00179D0 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C0017AC0 (-GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::ProcessGdiSysmemTokens(CLegacyTokenBuffer **this)
{
  int CurrentBufferPointer; // edi
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  int v5; // eax
  CLegacyTokenBuffer *v6; // rdx
  unsigned int v7; // r8d
  CLegacyTokenBuffer *v8; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF
  LONG PreviousState; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int8 *v12; // [rsp+50h] [rbp+18h] BYREF

  CTokenManager::AcquireTokenManagerLock((CTokenManager *)this);
  CurrentBufferPointer = CTokenManager::EnsureCurrentLegacyTokenBuffer((CTokenManager *)this);
  if ( CurrentBufferPointer >= 0 )
  {
    CurrentBufferPointer = CLegacyTokenBuffer::GetCurrentBufferPointer(
                             this[23],
                             &v12,
                             (unsigned int *)&PreviousState,
                             0x280u);
    if ( CurrentBufferPointer >= 0 )
    {
      v10 = 0;
      Global = DXGGLOBAL::GetGlobal(v3);
      v5 = (*(__int64 (__fastcall **)(_QWORD, int *, unsigned __int8 *))(*((_QWORD *)Global + 219) + 112LL))(
             (unsigned int)PreviousState,
             &v10,
             v12);
      v6 = this[23];
      CurrentBufferPointer = v5;
      v7 = 40 * v10;
      *(_DWORD *)(*((_QWORD *)v6 + 261) + 16LL) += v10;
      *(_DWORD *)(*((_QWORD *)v6 + 261) + 2068LL) += v7;
      *((_DWORD *)v6 + 526) -= v7;
      *((_QWORD *)v6 + 262) += v7;
      if ( v5 == -1073741789 )
        CurrentBufferPointer = 0;
      if ( CurrentBufferPointer >= 0 && v10 )
      {
        v8 = this[7];
        PreviousState = 0;
        ZwSetEvent(v8, &PreviousState);
      }
    }
  }
  this[12] = 0LL;
  ExReleasePushLockExclusiveEx(this + 11, 0LL);
  return (unsigned int)CurrentBufferPointer;
}
