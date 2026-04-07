/*
 * XREFs of ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180013ABC
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180031E80 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x180013918 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 */

__int64 __fastcall CContactManager::OnMultiContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *a2)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned int v6; // edi
  unsigned int v8; // esi
  __int64 v9; // r8
  int v10; // ecx
  char *v11; // r9
  _DWORD v12[6]; // [rsp+40h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)(v5 - 1) > 0x7E )
  {
    v6 = -2147024809;
  }
  else if ( *((_DWORD *)a2 + 2) == 40 * v5 )
  {
    v6 = 0;
    v8 = 0;
    if ( (_DWORD)v5 )
    {
      do
      {
        v9 = *((_QWORD *)a2 + 5 * v8 + 3);
        if ( *((_DWORD *)a2 + 10 * v8 + 12) == 1 )
        {
          if ( *((_BYTE *)this + 324) )
          {
            v10 = *((_DWORD *)a2 + 10 * v8 + 7);
            v11 = (char *)v12;
            v12[1] = v10 - 25;
            v12[3] = v10 + 25;
            v12[0] = v9 - 25;
            v12[2] = v9 + 25;
          }
          else
          {
            v11 = (char *)a2 + 40 * v8 + 32;
          }
          CContactManager::ProcessTouchContact(
            this,
            *((unsigned int *)a2 + 10 * v8 + 5),
            v9,
            v11,
            *((_DWORD *)a2 + 10 * v8 + 13),
            *((_DWORD *)a2 + 10 * v8 + 14),
            *(_QWORD *)((char *)a2 + 12));
        }
        else
        {
          CContactManager::ProcessPenContact(
            (__int64)this,
            *((_DWORD *)a2 + 10 * v8 + 5),
            v9,
            v4,
            *((_DWORD *)a2 + 10 * v8 + 13),
            *((_DWORD *)a2 + 10 * v8 + 14),
            *(_QWORD *)((char *)a2 + 12));
        }
        ++v8;
      }
      while ( v8 < *((_DWORD *)a2 + 1) );
    }
  }
  else
  {
    v6 = -2147024872;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return v6;
}
