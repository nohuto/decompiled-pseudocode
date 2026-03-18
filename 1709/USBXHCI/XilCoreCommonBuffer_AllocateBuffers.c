/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffers @ 0x1C0040638
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C00401F0 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0040408 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_Create @ 0x1C0040968 (XilCoreCommonBuffer_Create.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0040BB0 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C001EFB4 (WPP_RECORDER_SF_qdd.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C003F594 (DmaEnabler_AllocateCommonBufferPage.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x1C004007C (WPP_RECORDER_SF_ddqDddd.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C005FDBC (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C00601E8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

void __fastcall XilCoreCommonBuffer_AllocateBuffers(__int64 **a1, __int64 a2, int a3)
{
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  __int64 v8; // rax
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 *v13; // r15
  __int64 v14; // rcx
  __int64 **v15; // rsi
  KIRQL v16; // al
  __int64 v17; // r14
  _QWORD *v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 ***v25; // rcx
  int v26; // [rsp+20h] [rbp-88h]
  __int64 v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h]
  __int64 *v29; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v30; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+18h]
  __int64 i; // [rsp+C8h] [rbp+20h]

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdd(
      a1[1][9],
      5u,
      8u,
      0xBu,
      (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids,
      a2,
      *(_DWORD *)(a2 + 24),
      *(_DWORD *)(a2 + 28));
  _InterlockedIncrement((volatile signed __int32 *)a1 + 52);
  v7 = ((unsigned int)(a3 * *(_DWORD *)a2) >> 12) + (((a3 * *(_DWORD *)a2) & 0xFFF) != 0);
  v8 = 0x1000u / *(_DWORD *)a2;
  v31 = 0x1000u / *(_DWORD *)a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v28) = v8;
    LODWORD(v27) = v7;
    WPP_RECORDER_SF_dd(a1[1][9], 5u, 8u, 0xCu, (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids, v27, v28);
    v8 = v31;
  }
  v9 = 0;
  if ( v7 )
  {
    v10 = 88 * v8 + 32;
    for ( i = v10; ; v10 = i )
    {
      v11 = **a1;
      v12 = *(_BYTE *)(v11 + 441)
          ? SecureDmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v11 + 104), v10, &v29, &v30)
          : DmaEnabler_AllocateCommonBufferPage(*(__int64 **)(v11 + 96), v10, &v29, &v30);
      if ( v12 < 0 )
        break;
      v13 = v29;
      if ( (v29[1] & 0xFFF) != 0 )
      {
        WPP_RECORDER_SF_(a1[1][9], 3u, 8u, 0xDu, (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids);
        v14 = **a1;
        if ( *(_BYTE *)(v14 + 441) )
          SecureDmaEnabler_FreeCommonBufferPage(v14, v13);
        else
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v13[2]);
      }
      else
      {
        v15 = a1 + 2;
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 2);
        v17 = v30;
        *((_BYTE *)a1 + 25) = v16;
        ++*((_DWORD *)a1 + 50);
        *(_QWORD *)(v17 + 24) = v13;
        *(_BYTE *)(v17 + 16) = 1;
        v18 = *(_QWORD **)(a2 + 56);
        if ( *v18 != a2 + 48 )
          __fastfail(3u);
        *(_QWORD *)v17 = a2 + 48;
        *(_QWORD *)(v17 + 8) = v18;
        *v18 = v17;
        *(_QWORD *)(a2 + 56) = v17;
        if ( v31 )
        {
          v19 = a2 + 32;
          v20 = (_QWORD *)(v17 + 80);
          do
          {
            v21 = *v13;
            *(v20 - 4) = *v13;
            *(v20 - 4) = v21 + v6 * *(_DWORD *)a2;
            v22 = v13[1];
            *(v20 - 3) = v22;
            v23 = v6 * *(_DWORD *)a2;
            *(v20 - 2) = v17;
            *(v20 - 3) = v22 + v23;
            *((_DWORD *)v20 - 2) = *(_DWORD *)a2;
            v24 = *(_QWORD **)(v19 + 8);
            if ( *v24 != v19 )
              __fastfail(3u);
            *(v20 - 5) = v24;
            *(v20 - 6) = v19;
            *v24 = v20 - 6;
            *(_QWORD *)(v19 + 8) = v20 - 6;
            v25 = (__int64 ***)a1[21];
            if ( *v25 != a1 + 20 )
              __fastfail(3u);
            *v20 = a1 + 20;
            v20[1] = v25;
            *v25 = (__int64 **)v20;
            a1[21] = v20;
            ++*(_DWORD *)(a2 + 24);
            ++*(_DWORD *)(a2 + 28);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddqDddd(a1[1][9], *(unsigned int *)(a2 + 24), v19, *(unsigned int *)(a2 + 28), v26);
              v19 = a2 + 32;
            }
            ++v6;
            v20 += 11;
          }
          while ( v6 < v31 );
          v15 = a1 + 2;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v15, *((_BYTE *)v15 + 9));
        v6 = 0;
      }
      if ( ++v9 >= v7 )
        break;
    }
  }
}
