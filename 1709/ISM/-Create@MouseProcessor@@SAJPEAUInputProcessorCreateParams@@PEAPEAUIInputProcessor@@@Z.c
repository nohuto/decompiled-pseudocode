/*
 * XREFs of ?Create@MouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18006BA60
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18006B4BC (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     ?Initialize@MouseProcessor@@IEAAJPEBGJ@Z @ 0x18006BB64 (-Initialize@MouseProcessor@@IEAAJPEBGJ@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MouseProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  const wchar_t *v4; // rbx
  int v5; // ebp
  MouseProcessor *v6; // rax
  __int64 v7; // rcx
  MouseProcessor *v8; // rdi
  MouseProcessor *v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rcx

  v4 = (const wchar_t *)*((_QWORD *)a1 + 3);
  if ( !v4 || !*v4 )
    v4 = L"MouseSensitivity";
  v5 = 5;
  if ( *((int *)a1 + 8) >= 0 )
    v5 = *((_DWORD *)a1 + 8);
  v6 = (MouseProcessor *)malloc(0x248uLL);
  v8 = v6;
  if ( v6 )
    memset(v6, 0, 0x248uLL);
  if ( v8 )
    v9 = MouseProcessor::MouseProcessor(v8, (struct DeviceInfo **)a1);
  else
    v9 = 0LL;
  if ( v9 )
  {
    v11 = MouseProcessor::Initialize(v9, v4, v5);
    v10 = v11;
    if ( v11 >= 0 )
    {
      *a2 = v9;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 153, v11);
    }
  }
  else
  {
    v10 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 148, 14);
  }
  return v10;
}
