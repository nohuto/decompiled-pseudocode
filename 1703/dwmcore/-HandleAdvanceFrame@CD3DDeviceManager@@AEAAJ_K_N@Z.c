/*
 * XREFs of ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18006BA60 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?AdvanceFrame@CRenderTargetManager@@QEAAJ_N0@Z @ 0x180131EEC (-AdvanceFrame@CRenderTargetManager@@QEAAJ_N0@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800061E0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180006704 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x1800428D0 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x180046638 (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18004D0C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800777C4 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?Flush@CD3DDeviceLevel1@@QEAAXXZ @ 0x180078E14 (-Flush@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078E6C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180079550 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x1800C7D38 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800CC1EC (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x1801358F4 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleAdvanceFrame(CD3DDeviceManager *this, __int64 a2, char a3)
{
  int v3; // ebp
  char v4; // r13
  __int64 v6; // rdi
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rsi
  signed int v13; // ebp
  __int64 v14; // r15
  signed int v15; // ebp
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // esi
  __int64 *v19; // rcx
  _QWORD *v20; // rbp
  PSLIST_ENTRY v21; // r15
  int v22; // edx
  __int64 v23; // rbx
  unsigned int v24; // ebx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r13
  __int64 v33; // rcx
  __int64 v34; // r13
  struct CD3DResource *v35; // r13
  __int64 v36; // rdx
  __int64 *v37; // r8
  __int64 v38; // rcx
  int v39; // eax
  char IsHardwareProtectionDisabled; // al
  __int64 v41; // rcx
  CD3DResourceSourceReference *v42; // rcx
  CD3DResourceSourceReference **v43; // r8
  CD3DResourceSourceReference **v44; // rdx
  __int64 v45; // rax
  _QWORD v46[11]; // [rsp+30h] [rbp-58h] BYREF
  int v47; // [rsp+90h] [rbp+8h]
  unsigned int v49; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v47 = 0;
  v4 = a3;
  EnterCriticalSection(&CriticalSection);
  LODWORD(v6) = qword_18023E900;
  if ( (_DWORD)qword_18023E900 )
  {
    do
    {
      v6 = (unsigned int)(v6 - 1);
      v7 = 0;
      v8 = 1LL;
      v9 = 40 * v6;
      v10 = *(_QWORD *)(40 * v6 + qword_18023E890);
      if ( *(_QWORD *)(v10 + 1104) != a2 )
      {
        *(_BYTE *)(v10 + 1122) = 0;
        v11 = 0LL;
        v12 = (_QWORD *)(v10 + 552);
        *(_QWORD *)(v10 + 1104) = a2;
        if ( v10 != -552 )
          v11 = v10;
        v13 = *(_DWORD *)(v10 + 576) - 1;
        v14 = *(_QWORD *)(v11 + 1104);
        if ( v13 >= 0 )
        {
          v32 = 8LL * v13;
          do
          {
            v33 = *(_QWORD *)(*v12 + v32);
            if ( (unsigned __int64)(v14 - *(_QWORD *)(v33 + 248)) >= 0x20 )
            {
              *(_BYTE *)(v33 + 256) = 0;
              CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v33);
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v10 + 552), v13);
            }
            v32 -= 8LL;
            --v13;
          }
          while ( v13 >= 0 );
          v4 = a3;
        }
        v15 = *(_DWORD *)(v10 + 576) - 1;
        if ( v15 >= 0 )
        {
          v34 = 8LL * v15;
          do
          {
            if ( *(_DWORD *)(v10 + 576) <= 0x20u )
              break;
            v38 = *(_QWORD *)(*v12 + v34);
            if ( v14 != *(_QWORD *)(v38 + 248) )
            {
              *(_BYTE *)(v38 + 256) = 0;
              CScratchRenderTargetBitmap::Release((CScratchRenderTargetBitmap *)v38);
              DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)(v10 + 552), v15);
            }
            v34 -= 8LL;
            --v15;
          }
          while ( v15 >= 0 );
          v4 = a3;
        }
        v16 = *(_QWORD *)(v10 + 600);
        v46[1] = *(_QWORD *)(v10 + 616);
        v46[0] = 0LL;
        v46[2] = a2;
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v16 + 32LL))(v16, v46, 1LL);
        v18 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xD88u);
        if ( !*(_DWORD *)(v10 + 872) )
        {
          if ( v18 == -2005532292 || v18 == -2147024882 || v18 == -2005270523 )
          {
            if ( (unsigned int)CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
                                 (CD3DDeviceManager *)&g_D3DDeviceManager,
                                 *(struct _LUID *)(v10 + 712)) )
            {
              if ( v18 != -2005270523
                || (v39 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 640) + 312LL))(*(_QWORD *)(v10 + 640)),
                    v8 = 1LL,
                    *(_DWORD *)(v10 + 872) = -2003304307,
                    v39 == -2005270480) )
              {
                CD3DDeviceManager::IsHardwareProtectionDisabled();
                CD3DDeviceManager::s_bHwProtectionTempDisabled = 1;
                IsHardwareProtectionDisabled = CD3DDeviceManager::IsHardwareProtectionDisabled();
                if ( (_BYTE)v41 != IsHardwareProtectionDisabled && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                  Template_q(v41, &EVTDESC_ETWGUID_HW_PROTECTION_TEMPDISABLE, (unsigned int)v8);
              }
            }
          }
          if ( !*(_DWORD *)(v10 + 872) )
          {
            if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v18, 0LL, &v49) )
              v18 = v49;
            if ( v18 == -2003304307 )
              *(_DWORD *)(v10 + 872) = -2003304307;
          }
        }
        if ( v4 )
          CD3DDeviceLevel1::ProcessUnpinResources((CD3DDeviceLevel1 *)v10);
        v19 = (__int64 *)(v10 + 992);
        if ( (__int64 *)*v19 != v19 )
        {
          v36 = v10 + 976;
          v37 = *(__int64 **)(v10 + 984);
          if ( *(_QWORD *)(*(_QWORD *)(v10 + 976) + 8LL) != v10 + 976 || *v37 != v36 )
            __fastfail(3u);
          if ( *(__int64 **)(*v19 + 8) != v19 || **(__int64 ***)(v10 + 1000) != v19 )
            __fastfail(3u);
          *v37 = (__int64)v19;
          *(_QWORD *)(v10 + 984) = *(_QWORD *)(v10 + 1000);
          **(_QWORD **)(v10 + 1000) = v36;
          *(_QWORD *)(v10 + 1000) = v37;
          v8 = *v19;
          if ( *(__int64 **)(*v19 + 8) != v19 || (__int64 *)*v37 != v19 )
            __fastfail(3u);
          *v37 = v8;
          *(_QWORD *)(v8 + 8) = v37;
          *(_QWORD *)(v10 + 1000) = v10 + 992;
          *v19 = (__int64)v19;
        }
        v20 = *(_QWORD **)(v10 + 1032);
        while ( v20 != (_QWORD *)(v10 + 1032) )
        {
          v42 = (CD3DResourceSourceReference *)(v20 - 2);
          v20 = (_QWORD *)*v20;
          if ( (int)--*((_DWORD *)v42 + 2) <= 0 )
          {
            v43 = (CD3DResourceSourceReference **)*((_QWORD *)v42 + 2);
            v44 = (CD3DResourceSourceReference **)*((_QWORD *)v42 + 3);
            if ( v43[1] != (CD3DResourceSourceReference *)((char *)v42 + 16)
              || *v44 != (CD3DResourceSourceReference *)((char *)v42 + 16) )
            {
              __fastfail(3u);
            }
            *v44 = (CD3DResourceSourceReference *)v43;
            v43[1] = (CD3DResourceSourceReference *)v44;
            CD3DResourceSourceReference::`scalar deleting destructor'(v42, (unsigned int)v44);
          }
        }
        if ( *(_QWORD *)(v10 + 640) )
        {
          v21 = InterlockedFlushSList((PSLIST_HEADER)(v10 + 944));
          if ( v21 )
          {
            while ( 1 )
            {
              v35 = (struct CD3DResource *)&v21[-3];
              v21 = v21->Next;
              CD3DResourceManager::DestroyResource((CD3DResourceManager *)(v10 + 928), v35);
              if ( v35 )
                (*(void (__fastcall **)(struct CD3DResource *, __int64))(*(_QWORD *)v35 + 16LL))(v35, 1LL);
              if ( !v21 )
              {
                v21 = InterlockedFlushSList((PSLIST_HEADER)(v10 + 944));
                if ( !v21 )
                  break;
              }
            }
            v4 = a3;
          }
        }
        v3 = v47;
        v7 = 1;
      }
      if ( *(_BYTE *)(v10 + 1125) )
        CD3DDeviceLevel1::Flush((CD3DDeviceLevel1 *)v10);
      if ( v7
        && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v10 + 640) + 312LL))(*(_QWORD *)(v10 + 640), v8) < 0 )
      {
        if ( *(int *)(v10 + 872) >= 0 )
          *(_DWORD *)(v10 + 872) = -2003304307;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304307, 0x151u);
        if ( v3 >= 0 )
          v3 = -2003304307;
        v47 = v3;
      }
      if ( *(int *)(v10 + 872) < 0 )
      {
        CD3DDeviceLevel1::ProcessDeviceLost((CD3DDeviceLevel1 *)v10);
      }
      else
      {
        v22 = dword_18023E8A8;
        v23 = *(_QWORD *)(v9 + qword_18023E890);
        if ( !*(_DWORD *)(v23 + 496)
          && (*(int *)(v23 + 872) < 0
           || !*(_DWORD *)(*(_QWORD *)(v23 + 144) + 16LL)
           && !*(_DWORD *)(v23 + 1048)
           && GetCurrentFrameId() >= *(_QWORD *)(v23 + 1112)) )
        {
          v26 = qword_18023E900;
          v27 = (unsigned int)(v22 - 1);
          if ( (unsigned int)v6 >= (unsigned int)qword_18023E900 )
          {
            v45 = qword_18023E890;
            *(_OWORD *)(v9 + qword_18023E890) = *(_OWORD *)(qword_18023E890 + 40 * v27);
            *(_OWORD *)(v9 + v45 + 16) = *(_OWORD *)(v45 + 40 * v27 + 16);
            *(_QWORD *)(v9 + v45 + 32) = *(_QWORD *)(v45 + 40 * v27 + 32);
          }
          else
          {
            LODWORD(qword_18023E900) = qword_18023E900 - 1;
            v28 = 5LL * (unsigned int)(v26 - 1);
            v29 = qword_18023E890;
            *(_OWORD *)(v9 + qword_18023E890) = *(_OWORD *)(qword_18023E890 + 8 * v28);
            *(_OWORD *)(v9 + v29 + 16) = *(_OWORD *)(v29 + 8 * v28 + 16);
            *(_QWORD *)(v9 + v29 + 32) = *(_QWORD *)(v29 + 8 * v28 + 32);
            v30 = 5LL * (unsigned int)qword_18023E900;
            v31 = qword_18023E890;
            *(_OWORD *)(qword_18023E890 + 8 * v30) = *(_OWORD *)(qword_18023E890 + 40 * v27);
            *(_OWORD *)(v31 + 8 * v30 + 16) = *(_OWORD *)(v31 + 40 * v27 + 16);
            *(_QWORD *)(v31 + 8 * v30 + 32) = *(_QWORD *)(v31 + 40 * v27 + 32);
          }
          dword_18023E8A8 = v22 - 1;
          if ( v22 == 1 )
            DynArrayImpl<0>::ShrinkToSize(&qword_18023E890, 40LL);
          CD3DDeviceLevel1::`vector deleting destructor'((CD3DDeviceLevel1 *)v23, 1u);
          if ( qword_18023E850 )
            CSurfaceManager::ResetTokenThread(qword_18023E850);
        }
      }
    }
    while ( (_DWORD)v6 );
  }
  v24 = dword_18023E8A8;
  if ( dword_18023E8A8 )
  {
    do
    {
      if ( v24 <= (unsigned int)qword_18023E900 )
        break;
      CD3DDeviceManager::DeleteUnusedDevice((CD3DDeviceManager *)&g_D3DDeviceManager, --v24);
    }
    while ( v24 );
  }
  LeaveCriticalSection(&CriticalSection);
  return (unsigned int)v3;
}
