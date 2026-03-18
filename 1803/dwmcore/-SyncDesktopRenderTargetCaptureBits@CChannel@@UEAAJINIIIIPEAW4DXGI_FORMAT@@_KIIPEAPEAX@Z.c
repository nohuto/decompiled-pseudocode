/*
 * XREFs of ?SyncDesktopRenderTargetCaptureBits@CChannel@@UEAAJINIIIIPEAW4DXGI_FORMAT@@_KIIPEAPEAX@Z @ 0x180085370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1800876A8 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CChannel::SyncDesktopRenderTargetCaptureBits(
        CChannel *this,
        int a2,
        double a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        enum DXGI_FORMAT *a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned int a11,
        void **a12)
{
  enum DXGI_FORMAT *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  void **v18; // rcx
  _BYTE v20[8]; // [rsp+38h] [rbp-59h] BYREF
  void *v21; // [rsp+40h] [rbp-51h]
  enum DXGI_FORMAT v22; // [rsp+4Ch] [rbp-45h]
  int v23; // [rsp+50h] [rbp-41h]
  int v24; // [rsp+58h] [rbp-39h] BYREF
  int v25; // [rsp+5Ch] [rbp-35h] BYREF
  double v26; // [rsp+60h] [rbp-31h]
  int v27; // [rsp+68h] [rbp-29h]
  unsigned int v28; // [rsp+6Ch] [rbp-25h]
  unsigned int v29; // [rsp+70h] [rbp-21h]
  unsigned int v30; // [rsp+74h] [rbp-1Dh]
  enum DXGI_FORMAT v31; // [rsp+78h] [rbp-19h]
  unsigned __int64 v32; // [rsp+7Ch] [rbp-15h]
  unsigned int v33; // [rsp+84h] [rbp-Dh]
  unsigned int v34; // [rsp+88h] [rbp-9h]
  char *v35; // [rsp+B8h] [rbp+27h] BYREF

  v35 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v24 = 135;
  memset_0(&v25, 0, 0x30uLL);
  v28 = a5;
  v29 = a6;
  v30 = a7;
  v27 = a4;
  v15 = a8;
  v26 = a3;
  v25 = a2;
  v31 = *a8;
  v32 = a9;
  v33 = a10;
  v34 = a11;
  v16 = CChannel::SendSyncCommand(this, &v24, 0x34u, (struct MIL_MESSAGE *)v20);
  v17 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x7CFu);
  }
  else
  {
    v17 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x7D1u);
    }
    else
    {
      v18 = a12;
      *v15 = v22;
      *v18 = v21;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  return v17;
}
