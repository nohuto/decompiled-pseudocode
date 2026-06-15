/*
 * XREFs of ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000A600
 * Callers:
 *     ??1CSubmixImpl@@QEAA@XZ @ 0x1400081D0 (--1CSubmixImpl@@QEAA@XZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000D800 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x14003077C (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x14003651C (WPP_SF_q.c)
 *     ?RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x14004252C (-RemoveCaptureConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections(struct IAudioProcessor **this)
{
  struct IAudioProcessor *v2; // rcx
  struct IAudioProcessor *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct IAudioProcessor *v6; // rsi
  __int64 v7; // rdi
  struct IAudioProcessor *v8; // r14
  unsigned __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rbx
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h]
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 46LL, &WPP_1bb1b06919453819a20d8123e6c4939d_Traceguids, this);
  }
  if ( *((_DWORD *)this + 29) )
  {
    v2 = this[18];
    if ( v2 )
    {
      if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64 *))(*(_QWORD *)v2 + 32LL))(v2, &v20) >= 0 )
      {
        v3 = this[3];
        while ( v3 )
        {
          v4 = *((_QWORD *)v3 + 2);
          v3 = (struct IAudioProcessor *)*((_QWORD *)v3 + 1);
          if ( *(_DWORD *)(v4 + 40) == 2 )
          {
            v5 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 40LL);
            v18 = v5;
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
            (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)this[18] + 64LL))(
              this[18],
              v20,
              v5);
            if ( v5 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          }
        }
        v6 = this[8];
        if ( v6 )
        {
          while ( 1 )
          {
            v7 = *((_QWORD *)v6 + 2);
            v6 = *(struct IAudioProcessor **)v6;
            v8 = this[18];
            v9 = v20;
            *(_DWORD *)(v7 + 4) = 0;
            v10 = *(_DWORD *)(v7 + 16);
            if ( v10 )
            {
              if ( v10 == 1 )
                CConnectionInstance::RemoveCaptureConnection((CConnectionInstance *)v7, v8, v9);
              goto LABEL_33;
            }
            v19 = 0LL;
            v18 = 0LL;
            v11 = *(_QWORD *)(v7 + 32);
            if ( !v11 )
              goto LABEL_25;
            v12 = *(_DWORD *)(v11 + 40);
            if ( v12 == 2 )
              break;
            if ( v12 != 1 && v12 != 3 )
              goto LABEL_25;
            if ( (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v11 + 32))(
                   **(_QWORD **)(v11 + 32),
                   &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                   &v18) >= 0 )
            {
              (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)v8 + 136LL))(
                v8,
                v9,
                v18);
              v14 = v18;
              if ( v18 )
              {
                v18 = 0LL;
LABEL_24:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
              }
LABEL_25:
              v15 = *(_QWORD *)(v7 + 24);
              if ( v15 )
              {
                v16 = *(_DWORD *)(v15 + 40);
                if ( v16 == 2 )
                {
                  v17 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 40LL);
                  v19 = v17;
                  if ( v17 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
                  (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64, _QWORD))(*(_QWORD *)v8 + 104LL))(
                    v8,
                    v9,
                    v17,
                    *(_QWORD *)(v7 + 8));
                  if ( v17 )
                  {
                    v19 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
                  }
                }
                else if ( (v16 == 1 || v16 == 3)
                       && (****(int (__fastcall *****)(_QWORD, GUID *, __int64 *))(v15 + 32))(
                            **(_QWORD **)(v15 + 32),
                            &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
                            &v18) >= 0 )
                {
                  (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64))(*(_QWORD *)v8 + 136LL))(
                    v8,
                    v9,
                    v18);
                  ATL::CComPtrBase<IAudioProcessingObject>::Release(&v18);
                }
              }
            }
            if ( v18 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_33:
            if ( !v6 )
              goto LABEL_34;
          }
          v13 = *(_QWORD *)(*(_QWORD *)(v11 + 32) + 40LL);
          v19 = v13;
          if ( v13 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          (*(void (__fastcall **)(struct IAudioProcessor *, unsigned __int64, __int64, _QWORD))(*(_QWORD *)v8 + 80LL))(
            v8,
            v9,
            v13,
            *(_QWORD *)(v7 + 8));
          v14 = v13;
          if ( v13 )
          {
            v19 = 0LL;
            goto LABEL_24;
          }
          goto LABEL_25;
        }
LABEL_34:
        if ( (*(int (__fastcall **)(struct IAudioProcessor *, unsigned __int64))(*(_QWORD *)this[18] + 40LL))(
               this[18],
               v20) >= 0 )
          *((_DWORD *)this + 29) = 0;
      }
    }
  }
}
