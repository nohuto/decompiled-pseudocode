/*
 * XREFs of NtDCompositionProcessChannelBatchBuffer @ 0x1C001DB40
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0018DB0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionProcessChannelBatchBuffer(int a1, unsigned int a2, unsigned int *a3, bool *a4)
{
  __int64 v5; // rsi
  unsigned int v6; // r12d
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  signed int v14; // edi
  struct _ERESOURCE *v15; // rbx
  unsigned int v16; // eax
  bool v17; // bl
  unsigned int v19; // [rsp+34h] [rbp-64h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-60h]
  signed int v21; // [rsp+3Ch] [rbp-5Ch]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  int Buffer; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h]

  v5 = 0LL;
  v23 = 0LL;
  v6 = 0;
  v20 = 0;
  v7 = 0LL;
  v22 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
    v9 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v9 )
  {
    v11 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = *(struct _RTL_GENERIC_TABLE **)v9;
    Buffer = a1;
    v25 = 0LL;
    v13 = RtlLookupElementGenericTable(v12, &Buffer);
    if ( v13 )
      v8 = v13[1];
    v14 = v8 == 0 ? 0xC0000022 : 0;
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v5 = v23;
      v6 = v20;
      v7 = v22;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = -1073741823;
  }
  if ( v8 )
  {
    v15 = *(struct _ERESOURCE **)(v8 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v15, 1u);
    v7 = v8;
    v22 = v8;
  }
  if ( v14 >= 0 )
  {
    if ( (unsigned int)_guard_dispatch_icall_fptr() == 1 )
    {
      v5 = v7;
      v23 = v7;
    }
    else
    {
      v14 = -1073741811;
      _guard_dispatch_icall_fptr();
    }
  }
  v21 = v14;
  if ( v14 < 0 )
  {
    v17 = 0;
  }
  else
  {
    v6 = 0;
    v19 = 0;
    v16 = *(_DWORD *)(v5 + 728);
    v14 = v16 < a2 ? 0xC000000D : 0;
    if ( a2 <= v16 )
    {
      v14 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
              (DirectComposition::CApplicationChannel *)v5,
              *(char **)(v5 + 736),
              a2,
              1,
              &v19);
      v6 = v19;
    }
    v20 = v6;
    v17 = *(_DWORD *)(v5 + 540) != 0;
    v21 = v14;
    _guard_dispatch_icall_fptr();
  }
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v6;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v17;
  return (unsigned int)v14;
}
