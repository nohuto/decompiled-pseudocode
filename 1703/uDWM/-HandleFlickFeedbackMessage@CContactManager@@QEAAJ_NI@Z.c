/*
 * XREFs of ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180089450
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18001024C (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x180088EFC (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800899BC (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x18008DB28 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x18008DB94 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleFlickFeedbackMessage(CContactManager *this, char a2, int a3)
{
  unsigned int v3; // r10d
  int v4; // ebp
  unsigned __int16 *v5; // r14
  __int64 v6; // rbx
  __int64 v8; // r9
  __int64 v9; // rsi
  CTrackingTooltip *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rbx
  HMODULE ModuleHandleW; // rax
  CContactManager *v14; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // rcx
  __int64 v17; // rcx
  CTrackingTooltip *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // xmm1_8
  __int64 v23; // rcx
  unsigned int v25; // [rsp+20h] [rbp-28h]
  int v26; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 52);
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  if ( v3 )
  {
    v8 = *((_QWORD *)this + 23);
    while ( *(_DWORD *)(v8 + 24 * v6) != a3 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v3 )
        goto LABEL_30;
    }
    if ( (int)v6 >= 0 )
    {
      v9 = 3 * v6;
      v10 = *(CTrackingTooltip **)(v8 + 24 * v6 + 16);
      if ( a2 )
      {
        if ( v10 )
        {
          CTrackingTooltip::Update(v10, (const struct tagPOINT *)(v8 + 8 + 24 * v6), 0LL);
          goto LABEL_30;
        }
        _mm_lfence();
        v11 = *((_QWORD *)this + 23);
        v26 = 0;
        v12 = *(int *)(v11 + 24 * v6 + 4);
        ModuleHandleW = GetModuleHandleW(0LL);
        v5 = CContactManager::LoadFeedbackString(v14, ModuleHandleW, dword_1800B0A40[v12], &v26);
        if ( !v5 )
        {
          v25 = 1772;
LABEL_12:
          v4 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, v25);
          goto LABEL_30;
        }
        v15 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                         WPF::g_pProcessHeap,
                         112LL);
        v16 = v15;
        if ( v15 )
          *v15 = 0;
        else
          v16 = 0LL;
        *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v9 + 16) = v16;
        v17 = *((_QWORD *)this + 23);
        if ( !*(_QWORD *)(v17 + 8 * v9 + 16) )
        {
          v25 = 1776;
          goto LABEL_12;
        }
        v4 = CTrackingTooltip::Initialize(
               *(CTrackingTooltip **)(v17 + 8 * v9 + 16),
               (const struct tagPOINT *)(v17 + 8 + 8 * v9),
               v5);
        if ( v4 < 0 )
        {
          v18 = *(CTrackingTooltip **)(*((_QWORD *)this + 23) + 8 * v9 + 16);
          if ( v18 )
            CTrackingTooltip::`scalar deleting destructor'(v18);
          *(_QWORD *)(*((_QWORD *)this + 23) + 8 * v9 + 16) = 0LL;
        }
      }
      else
      {
        if ( v10 )
          CTrackingTooltip::`scalar deleting destructor'(v10);
        *(_QWORD *)(*((_QWORD *)this + 23) + 24 * v6 + 16) = 0LL;
        v19 = *((_DWORD *)this + 52);
        if ( (unsigned int)v6 < v19 )
        {
          v20 = *((_QWORD *)this + 23);
          if ( (unsigned int)v6 < v19 - 1 )
          {
            do
            {
              v21 = (unsigned int)v6;
              LODWORD(v6) = v6 + 1;
              v22 = *(_QWORD *)(v20 + 24LL * (unsigned int)v6 + 16);
              v23 = 3 * v21;
              *(_OWORD *)(v20 + 8 * v23) = *(_OWORD *)(v20 + 24LL * (unsigned int)v6);
              *(_QWORD *)(v20 + 8 * v23 + 16) = v22;
            }
            while ( (unsigned int)v6 < *((_DWORD *)this + 52) - 1 );
          }
          --*((_DWORD *)this + 52);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
        }
      }
    }
  }
LABEL_30:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int16 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v5);
  return (unsigned int)v4;
}
