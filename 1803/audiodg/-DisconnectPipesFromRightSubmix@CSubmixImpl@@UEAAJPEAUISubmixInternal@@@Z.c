/*
 * XREFs of ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140004A80
 * Callers:
 *     ?DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z @ 0x140004BF0 (-DisconnectFromRightSubmix@CSubmixImpl@@UEAAXPEAUISubmix@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140002F38 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z @ 0x1400030B4 (-DisconnectFromRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@@Z.c)
 *     ?RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x140005420 (-RemovePipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x140012680 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::DisconnectPipesFromRightSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  CSubmixImpl *v3; // rbx
  struct CPipeInstance *v4; // rdx
  int (*v5)(CSubmixImpl *__hidden, struct CPipeInstance *); // rax
  int v6; // eax
  int v7; // esi
  int v8; // edi
  _QWORD *Next; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _QWORD *v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = (_QWORD *)*((_QWORD *)this + 10);
  v3 = this;
  if ( v16 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v16);
      v7 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *))(**(_QWORD **)*Next + 152LL))(
             *(_QWORD *)*Next,
             a2);
      if ( v7 < 0 )
        break;
      if ( !v16 )
        goto LABEL_2;
    }
    v11 = 926LL;
    goto LABEL_21;
  }
LABEL_2:
  v16 = (_QWORD *)*((_QWORD *)v3 + 4);
  if ( v16 )
  {
    while ( 1 )
    {
      v12 = ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext((__int64)this, &v16);
      this = (CSubmixImpl *)*v12;
      if ( *(_BYTE *)(*v12 + 17LL) )
      {
        v7 = CStreamInstance::DisconnectFromRightSubmix((struct CPipeInstance **)this, a2);
        if ( v7 < 0 )
          break;
      }
      if ( !v16 )
        goto LABEL_3;
    }
    v11 = 936LL;
    goto LABEL_21;
  }
LABEL_3:
  v4 = (struct CPipeInstance *)*((_QWORD *)v3 + 3);
  if ( !v4 || !*((_BYTE *)v3 + 272) )
    goto LABEL_9;
  v5 = *(int (**)(CSubmixImpl *__hidden, struct CPipeInstance *))(*(_QWORD *)a2 + 48LL);
  if ( v5 == CSystemAudioDeviceSharedBase::RemovePipe )
  {
    v6 = CSystemAudioDeviceSharedBase::RemovePipe(a2, v4);
  }
  else if ( v5 == CSubmixImpl::RemovePipe )
  {
    v6 = CSubmixImpl::RemovePipe(a2, v4);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct ISubmixInternal *))v5)(a2);
  }
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = 943LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v7,
      v14);
    return (unsigned int)v7;
  }
  *((_BYTE *)v3 + 272) = 0;
LABEL_9:
  if ( *((_QWORD *)v3 + 29)
    && *((_BYTE *)v3 + 256)
    && (v13 = (*(__int64 (__fastcall **)(struct ISubmixInternal *))(*(_QWORD *)a2 + 48LL))(a2), v8 = v13, v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v13,
      v14);
  }
  else
  {
    *((_BYTE *)v3 + 256) = 0;
    v8 = 0;
  }
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B4,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v8,
    v14);
  return (unsigned int)v8;
}
