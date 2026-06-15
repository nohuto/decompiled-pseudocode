/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140014260
 * Callers:
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140013ED0 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x14003BD5C (WPP_SF_q.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z @ 0x140063000 (-AEWMILOG_MEMORY@@YAXKPEAXEE0_K11111@Z.c)
 */

// Hidden C++ exception states: #wind=1
CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  __int64 v4; // rcx
  void *v5; // rdx
  unsigned int v6; // ecx
  void *v7; // rdi
  int v8; // esi
  unsigned __int64 v10; // [rsp+40h] [rbp-38h]
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]
  LPVOID Context; // [rsp+80h] [rbp+8h] BYREF

  *(_QWORD *)this = &CSystemEffectWrapper::`vftable'{for `INDUnknown'};
  *((_QWORD *)this + 1) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  *((_QWORD *)this + 3) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)this + 4) = &CSystemEffectWrapper::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)this + 5) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)this + 6) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputRT'};
  *((_QWORD *)this + 7) = &CSystemEffectWrapper::`vftable'{for `IAPOAcousticEchoCancellation'};
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 9) = 0LL;
  }
  CoTaskMemFree(*((LPVOID *)this + 12));
  *((_QWORD *)this + 12) = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v7 = 0LL;
    if ( InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context) )
      v7 = Context;
    if ( g_bSkipRTHeap )
    {
      operator delete(this);
    }
    else
    {
      v8 = -2147467259;
      if ( v7 )
      {
        v8 = RtlFreeMemoryBlockLookaside(v7, this);
        v6 = v8 & 0xC0000000;
        if ( (v8 & 0xC0000000) == 0xC0000000 )
        {
          v6 = (unsigned int)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
          {
            WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_2231d4232b023e68cc7c9e9806fbc5db_Traceguids, v7);
          }
        }
      }
      AEWMILOG_MEMORY(v6, v5, 5u, 6u, v7, 0LL, 0LL, 0LL, v10, v11, v8);
    }
  }
  return this;
}
