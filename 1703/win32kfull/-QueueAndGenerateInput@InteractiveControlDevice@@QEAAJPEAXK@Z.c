/*
 * XREFs of ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0220300
 * Callers:
 *     ?OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C021B2A8 (-OnInputReport@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C021F2FC (--_GInteractiveControlInput@@QEAAPEAXI@Z.c)
 *     ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C021F920 (-DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z.c)
 *     ?GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveControlInput@@@Z @ 0x1C021FBCC (-GetPreviousInputReport@InteractiveControlDevice@@QEAAHPEAU_LIST_ENTRY@@PEAPEAVInteractiveContro.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0220140 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 *     ?QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z @ 0x1C0220540 (-QueueInput@InteractiveControlDevice@@QEAAXPEAU_LIST_ENTRY@@PEAVInteractiveControlInput@@@Z.c)
 *     ?UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z @ 0x1C0220CF4 (-UpdateInputTarget@InteractiveControlDevice@@QEAAPEAUtagWND@@I@Z.c)
 *     ??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z @ 0x1C0220D84 (--0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z.c)
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0220F30 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 *     ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0221278 (-ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z.c)
 */

__int64 __fastcall InteractiveControlDevice::QueueAndGenerateInput(
        InteractiveControlDevice *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  __int64 v3; // r12
  unsigned __int8 *v4; // rsi
  InteractiveControlInput *v5; // rbx
  int Messages; // edi
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  unsigned __int8 *v10; // r13
  InteractiveControlInput *v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r15d
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  struct InteractiveControlInput *v17; // [rsp+30h] [rbp-79h] BYREF
  int v18; // [rsp+38h] [rbp-71h] BYREF
  struct tagWND *updated; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-39h] BYREF
  struct InteractiveControlInput **v22; // [rsp+80h] [rbp-29h]
  int v23; // [rsp+88h] [rbp-21h]
  int v24; // [rsp+8Ch] [rbp-1Dh]
  struct tagWND **v25; // [rsp+90h] [rbp-19h]
  int v26; // [rsp+98h] [rbp-11h]
  int v27; // [rsp+9Ch] [rbp-Dh]
  struct InteractiveControlInput **v28; // [rsp+A0h] [rbp-9h]
  int v29; // [rsp+A8h] [rbp-1h]
  int v30; // [rsp+ACh] [rbp+3h]

  v3 = *((unsigned __int16 *)this + 40);
  v4 = a2;
  v5 = 0LL;
  v17 = 0LL;
  Messages = 0;
  if ( a3 % (unsigned int)v3 )
  {
    Messages = -1073739509;
    if ( (unsigned int)dword_1C0324190 > 2 )
    {
      TlgCreateSz(&pDesc, "InteractiveControlDevice::QueueAndGenerateInput -> Invalid report length.");
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v22 = (struct InteractiveControlInput **)&v18;
      v25 = &updated;
      v23 = 4;
      v26 = 4;
      v29 = 4;
      v18 = -1073739509;
      LODWORD(updated) = (_DWORD)v8;
      LODWORD(v17) = v3;
      v28 = &v17;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECA7A, v9, v8, 6u, &pData);
    }
  }
  else
  {
    v10 = &a2[a3];
    if ( a2 < v10 )
    {
      while ( 1 )
      {
        if ( !v5 )
        {
          v11 = (InteractiveControlInput *)Win32AllocPool(96LL, 1819440195LL);
          v5 = v11 ? InteractiveControlInput::InteractiveControlInput(v11, this) : 0LL;
          if ( !v5 )
            return (unsigned int)-1073741670;
        }
        Messages = InteractiveControlInput::ParseInputReport(v5, v4, v3);
        if ( Messages < 0 )
          break;
        InteractiveControlDevice::GetPreviousInputReport(this, 0LL, (struct _LIST_ENTRY **)&v17);
        v12 = InteractiveControlDevice::DetermineMessageCreationFlags(this, v17, v5);
        v13 = v12;
        if ( v12 )
        {
          updated = InteractiveControlDevice::UpdateInputTarget(this, v12);
          InteractiveControlDevice::PerformInputActions(this, v5, v13);
          InteractiveControlDevice::QueueInput(this, 0LL, v5);
          if ( !*((_DWORD *)this + 89) )
            Messages = InteractiveControlInput::GenerateMessages(v5, updated, *((unsigned int *)this + 16), v13);
          v5 = 0LL;
        }
        v4 += v3;
        if ( v4 >= v10 )
          goto LABEL_20;
      }
      if ( (unsigned int)dword_1C0324190 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v24 = 0;
        v22 = &v17;
        v23 = 4;
        LODWORD(v17) = Messages;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v14, v15, 4u, &pData);
      }
LABEL_20:
      if ( v5 )
        InteractiveControlInput::`scalar deleting destructor'(v5, 1);
    }
  }
  return (unsigned int)Messages;
}
