/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@UEAAJPEAUMsgString@@@Z @ 0x18016B4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18016C3F0 (-_DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?_CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18016C4CC (-_CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        TouchKeyboardExperienceManager *this,
        struct MsgString *a2)
{
  HSTRING v3; // rcx
  HRESULT ModalExperienceAsync; // ebx
  __int64 v5; // rdx
  unsigned int v6; // eax
  const WCHAR *v7; // rcx
  unsigned __int64 v8; // rax
  HSTRING v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = *(_DWORD *)a2 & 0xE0000000;
    if ( v6 == 0x40000000 )
    {
      v7 = (const WCHAR *)((char *)a2 + 8);
    }
    else
    {
      if ( v6 != 0x80000000 )
        __debugbreak();
      v7 = (const WCHAR *)*((_QWORD *)a2 + 1);
    }
    if ( v7 )
    {
      string = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      if ( v8 <= 0xFFFFFFFF )
      {
        ModalExperienceAsync = WindowsCreateString(v7, v8, &string);
        if ( ModalExperienceAsync >= 0 )
        {
          v9 = (HSTRING)*((_QWORD *)this + 31);
          *((_QWORD *)this + 31) = string;
          WindowsDeleteString(v9);
        }
      }
      else
      {
        ModalExperienceAsync = -2147024362;
      }
    }
    else
    {
      ModalExperienceAsync = -2147467261;
    }
    if ( ModalExperienceAsync < 0 )
    {
      v5 = 281LL;
      goto LABEL_21;
    }
  }
  else
  {
    v3 = (HSTRING)*((_QWORD *)this + 31);
    if ( v3 )
    {
      WindowsDeleteString(v3);
      *((_QWORD *)this + 31) = 0LL;
    }
  }
  ModalExperienceAsync = TouchKeyboardExperienceManager::_DismissView(
                           (TouchKeyboardExperienceManager *)((char *)this - 112),
                           (TouchKeyboardExperienceManager *)((char *)this + 184));
  if ( ModalExperienceAsync < 0 )
  {
    v5 = 285LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)ModalExperienceAsync);
    return (unsigned int)ModalExperienceAsync;
  }
  if ( *((_QWORD *)this + 31) )
  {
    ModalExperienceAsync = TouchKeyboardExperienceManager::_CreateModalExperienceAsync((TouchKeyboardExperienceManager *)((char *)this - 112));
    if ( ModalExperienceAsync < 0 )
    {
      v5 = 290LL;
      goto LABEL_21;
    }
  }
  return 0LL;
}
