/*
 * XREFs of ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x1802E9C80
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CalculatePointFromRect@JointResize@@AEAA?AUtagPOINT@@UtagRECT@@@Z @ 0x1802E8B00 (-CalculatePointFromRect@JointResize@@AEAA-AUtagPOINT@@UtagRECT@@@Z.c)
 *     ?ComputeExtendedViewRect@JointResize@@AEAA?AUtagRECT@@PEAUIApplicationView@@U2@@Z @ 0x1802E8E90 (-ComputeExtendedViewRect@JointResize@@AEAA-AUtagRECT@@PEAUIApplicationView@@U2@@Z.c)
 *     ?UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z @ 0x1802EA8B0 (-UpdateDropFeedback@JointResize@@AEAAJUtagRECT@@@Z.c)
 *     ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x1802EA9D8 (-UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowSizeUpdated(JointResize *this, struct tagRECT *a2)
{
  JointResize *v4; // rsi
  LONG v5; // edx
  LONG v6; // eax
  unsigned __int64 left; // rcx
  LONG v8; // r8d
  LONG v9; // edx
  LONG top; // eax
  __int64 (__fastcall ***v11)(CWin32ApplicationView *, struct _GUID *, void **); // r8
  struct tagRECT *v12; // rax
  int updated; // eax
  struct tagPOINT *v14; // rax
  JointResize *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  struct tagRECT v19; // [rsp+20h] [rbp-20h] BYREF
  struct tagRECT v20; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  struct tagRECT v22; // [rsp+50h] [rbp+10h] BYREF

  if ( *((_BYTE *)this + 136) && *((_QWORD *)this + 11) )
  {
    v4 = (JointResize *)((char *)this - 88);
    v19 = *a2;
    JointResize::CalculatePointFromRect((JointResize *)((char *)this - 88), &v22, &v19.left);
    v5 = *((_DWORD *)this + 44);
    v6 = v5;
    left = (unsigned int)v22.left;
    v8 = *((_DWORD *)this + 46);
    if ( v22.left > v5 )
      v6 = v22.left;
    if ( v6 >= v8 )
    {
      left = (unsigned int)v8;
      v22.left = *((_DWORD *)this + 46);
    }
    else if ( v22.left <= v5 )
    {
      left = (unsigned int)v5;
      v22.left = *((_DWORD *)this + 44);
    }
    v9 = *((_DWORD *)this + 45);
    top = v9;
    if ( v22.top > v9 )
      top = v22.top;
    if ( top >= *((_DWORD *)this + 47) )
    {
      v22.top = *((_DWORD *)this + 47);
    }
    else if ( v22.top <= v9 )
    {
      v22.top = *((_DWORD *)this + 45);
    }
    if ( (_DWORD)left != *((_DWORD *)this + 48) )
    {
      v11 = (__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **))*((_QWORD *)this + 13);
      *((_QWORD *)this + 24) = *(_QWORD *)&v22.left;
      v19 = *a2;
      v12 = JointResize::ComputeExtendedViewRect((JointResize *)left, &v20, v11, &v19);
      *a2 = *v12;
      v19 = *v12;
      updated = JointResize::UpdateDropFeedback(v4, &v19);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          319LL,
          (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
          (const char *)(unsigned int)updated);
      v19 = *a2;
      v14 = (struct tagPOINT *)JointResize::CalculatePointFromRect(v4, &v22, &v19.left);
      JointResize::UpdateGhostDivider(v15, *v14);
      if ( !*((_BYTE *)this + 328) )
      {
        v16 = *((_QWORD *)this + 16);
        v17 = *((_QWORD *)this + 14);
        v18 = *((_QWORD *)this + 13);
        *((_BYTE *)this + 328) = 1;
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v18, v17);
      }
    }
  }
}
