/*
 * XREFs of ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180082394
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x18002ADB0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18002C388 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180082FA4 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180083130 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 */

__int64 __fastcall CContactManager::OnMultiContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r8
  int v8; // ecx
  char *v9; // r9
  _DWORD v11[6]; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)(v4 - 1) <= 0x7E )
  {
    if ( *((_DWORD *)a2 + 2) == 40 * v4 )
    {
      v5 = 0;
      v6 = 0;
      if ( (_DWORD)v4 )
      {
        do
        {
          v7 = *((_QWORD *)a2 + 5 * v6 + 3);
          if ( *((_DWORD *)a2 + 10 * v6 + 12) == 1 )
          {
            if ( *((_BYTE *)this + 324) )
            {
              v8 = *((_DWORD *)a2 + 10 * v6 + 7);
              v9 = (char *)v11;
              v11[1] = v8 - 25;
              v11[3] = v8 + 25;
              v11[0] = v7 - 25;
              v11[2] = v7 + 25;
            }
            else
            {
              v9 = (char *)a2 + 40 * v6 + 32;
            }
            CContactManager::ProcessTouchContact(
              this,
              *((unsigned int *)a2 + 10 * v6 + 5),
              v7,
              v9,
              *((_DWORD *)a2 + 10 * v6 + 13),
              *((_DWORD *)a2 + 10 * v6 + 14),
              *(_QWORD *)((char *)a2 + 12));
          }
          else
          {
            CContactManager::ProcessPenContact(this, *((unsigned int *)a2 + 10 * v6 + 5), v7);
          }
          ++v6;
        }
        while ( v6 < *((_DWORD *)a2 + 1) );
      }
    }
    else
    {
      v5 = -2147024872;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v5;
}
