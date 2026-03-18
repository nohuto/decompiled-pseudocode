/*
 * XREFs of ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012C9F8
 * Callers:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0062B5C (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C012494C (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ?InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z @ 0x1C012C92C (-InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C012D2D0 (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x1C0132AC4 (-Initialize@DelayZoneTelemetry@@QEAAXKK@Z.c)
 */

void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection *v1; // rbx
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  unsigned __int16 *v5; // rdx
  DelayZoneTelemetry *v6; // rcx
  DelayZoneTelemetry *v7; // rax
  DelayZoneTelemetry *v8; // rdi
  _OWORD v9[5]; // [rsp+30h] [rbp-58h] BYREF

  v1 = DelayZonePalmRejection::s_instance;
  DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection::s_instance);
  memset(v9, 0, 0x48uLL);
  v2 = v9[1];
  *(_OWORD *)v1 = v9[0];
  v3 = v9[2];
  *((_OWORD *)v1 + 1) = v2;
  v4 = v9[3];
  *((_OWORD *)v1 + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v9[4];
  *((_OWORD *)v1 + 3) = v4;
  *((_QWORD *)v1 + 8) = v3;
  *((_QWORD *)v1 + 3) = 0LL;
  CInpLockGuard::Initialize((DelayZonePalmRejection *)((char *)v1 + 120));
  *((_QWORD *)v1 + 10) = (char *)v1 + 72;
  *((_QWORD *)v1 + 9) = (char *)v1 + 72;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 22) = 1;
  DelayZonePalmRejection::InitRecorderLog(v1, v5);
  v6 = (DelayZoneTelemetry *)*((_QWORD *)v1 + 21);
  if ( v6 )
  {
    DelayZoneTelemetry::Initialize(v6, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
  }
  else
  {
    v7 = (DelayZoneTelemetry *)Win32AllocPoolZInit(0x3010uLL, 0x7A647355u);
    v8 = v7;
    if ( v7 )
    {
      DelayZoneTelemetry::Initialize(v7, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
      *((_QWORD *)v1 + 21) = v8;
    }
    else
    {
      WPP_RECORDER_SF_(*((_QWORD *)v1 + 14), 4u, 0xDu, 0x16u, (__int64)&WPP_f5710132373f3cabafdc12ce4a875db4_Traceguids);
    }
  }
}
