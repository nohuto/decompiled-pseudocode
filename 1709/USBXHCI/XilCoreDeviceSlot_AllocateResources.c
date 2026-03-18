/*
 * XREFs of XilCoreDeviceSlot_AllocateResources @ 0x1C0040E4C
 * Callers:
 *     XilDeviceSlot_PrepareHardware @ 0x1C0016BB8 (XilDeviceSlot_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     CommonBuffer_AcquireBuffer @ 0x1C000F6FC (CommonBuffer_AcquireBuffer.c)
 *     CommonBuffer_AcquireBuffers @ 0x1C000F748 (CommonBuffer_AcquireBuffers.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C004108C (XilCoreDeviceSlot_FreeResources.c)
 */

__int64 __fastcall XilCoreDeviceSlot_AllocateResources(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdx
  void *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rax
  unsigned __int16 v7; // r9
  int v8; // edi
  int v9; // edx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  _QWORD *v13; // r8
  __int64 i; // r9
  int v15; // eax
  SIZE_T v16; // rdi
  PVOID PoolWithTag; // rax
  int v19[2]; // [rsp+28h] [rbp-20h]

  v1 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v4 = *(void **)(v3 + 120);
  v5 = *(_QWORD *)(v3 + 88);
  *(_QWORD *)(a1 + 48) = a1 + 40;
  *(_QWORD *)(a1 + 40) = a1 + 40;
  v6 = CommonBuffer_AcquireBuffer(v4, 4096, a1, 829713491);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
  {
    v7 = 13;
LABEL_3:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0xAu,
      v7,
      (__int64)&WPP_24817aee2eb83995db756ab8f8e1954d_Traceguids);
    v8 = -1073741670;
LABEL_16:
    XilCoreDeviceSlot_FreeResources(a1);
    return (unsigned int)v8;
  }
  v9 = *(_DWORD *)(v5 + 96);
  *(_DWORD *)(a1 + 20) = v9;
  if ( v9 )
  {
    v10 = CommonBuffer_AcquireBuffer(v4, 8 * v9, a1, 846490707);
    *(_QWORD *)(a1 + 32) = v10;
    if ( !v10 )
    {
      v7 = 14;
      goto LABEL_3;
    }
    v11 = CommonBuffer_AcquireBuffers((KSPIN_LOCK *)v4, *(_DWORD *)(a1 + 20), 4096, (int)v1, a1, 863267923, 0LL);
    v8 = v11;
    if ( v11 < 0 )
    {
      v19[0] = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0xAu,
        0xFu,
        (__int64)&WPP_24817aee2eb83995db756ab8f8e1954d_Traceguids,
        *(_QWORD *)v19);
      goto LABEL_15;
    }
    v12 = 0LL;
    v13 = (_QWORD *)*v1;
    for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL); (unsigned int)v12 < *(_DWORD *)(a1 + 20); v13 = (_QWORD *)*v13 )
    {
      *(_QWORD *)(i + 8 * v12) = v13[3];
      v12 = (unsigned int)(v12 + 1);
    }
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
  }
  v15 = *(_DWORD *)(v5 + 80);
  *(_DWORD *)(a1 + 16) = v15;
  v16 = 8LL * (unsigned int)(v15 + 1);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x49434858u);
  *(_QWORD *)(a1 + 56) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = 16;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, v16);
  WPP_RECORDER_SF_q(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 72LL),
    4u,
    0xAu,
    0x11u,
    (__int64)&WPP_24817aee2eb83995db756ab8f8e1954d_Traceguids,
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
  v8 = 0;
LABEL_15:
  if ( v8 < 0 )
    goto LABEL_16;
  return (unsigned int)v8;
}
