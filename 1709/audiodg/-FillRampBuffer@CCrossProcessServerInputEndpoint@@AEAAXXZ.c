/*
 * XREFs of ?FillRampBuffer@CCrossProcessServerInputEndpoint@@AEAAXXZ @ 0x140017394
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140017480 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140017B98 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 */

void __fastcall CCrossProcessServerInputEndpoint::FillRampBuffer(CCrossProcessServerInputEndpoint *this)
{
  unsigned int v1; // ebp
  int v2; // edx
  bool v3; // zf
  void *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // ebx

  v1 = *((_DWORD *)this + 20) * *((_DWORD *)this + 115);
  v2 = 128;
  v3 = *((_DWORD *)this + 24) == 8;
  v5 = (void *)*((_QWORD *)this + 13);
  if ( !v3 )
    v2 = 0;
  memset(v5, v2, v1);
  v6 = *((_QWORD *)this + 8);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  if ( CCrossProcessBaseEndpoint::IsValidOffset(this, v7) && CCrossProcessBaseEndpoint::IsValidOffset(this, v8) )
  {
    v9 = *((_QWORD *)this + 9);
    v10 = v7 - v8;
    v11 = *(_DWORD *)(v9 + 140) + (unsigned int)(v8 % *((unsigned int *)this + 34));
    if ( v1 >= v10 )
      v1 = v10;
    v12 = v1;
    if ( *(_DWORD *)(v9 + 144) - (int)v11 < v1 )
      v12 = *(_DWORD *)(v9 + 144) - v11;
    memcpy_0(*((void **)this + 13), (const void *)(*((_QWORD *)this + 8) + v11), v12);
    memcpy_0(
      (void *)(v12 + *((_QWORD *)this + 13)),
      (const void *)(*((_QWORD *)this + 8) + *(unsigned int *)(*((_QWORD *)this + 9) + 140LL)),
      v1 - v12);
  }
}
