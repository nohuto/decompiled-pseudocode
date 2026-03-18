/*
 * XREFs of InitQMiPTrace @ 0x1C01C0988
 * Callers:
 *     InitModuleAllocations @ 0x1C0122F80 (InitModuleAllocations.c)
 * Callees:
 *     <none>
 */

struct tagQMSG_HISTORY *InitQMiPTrace()
{
  struct tagQMSG_HISTORY *result; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  struct tagQMSG_HISTORY *v3; // rcx

  result = (struct tagQMSG_HISTORY *)(unsigned int)gdwPostMortemLogging;
  if ( (gdwPostMortemLogging & 1) != 0 )
  {
    result = (struct tagQMSG_HISTORY *)gSessionId;
    if ( gSessionId != gServiceSessionId )
    {
      result = (struct tagQMSG_HISTORY *)Win32AllocPoolZInit(86024LL, 1903260501LL);
      gpQmsgHistory = result;
      if ( !result )
      {
LABEL_4:
        gdwPostMortemLogging &= ~1u;
        return result;
      }
      gpQmsgHistory2 = (struct tagQMSG_HISTORY *)Win32AllocPoolZInit(86024LL, 1903260501LL);
      v3 = gpQmsgHistory2;
      if ( !gpQmsgHistory2 )
      {
        result = (struct tagQMSG_HISTORY *)Win32FreePool(gpQmsgHistory, v1, v2);
        gpQmsgHistory = 0LL;
        goto LABEL_4;
      }
      result = gpQmsgHistory;
      *((_DWORD *)gpQmsgHistory + 1) = 512;
      *((_DWORD *)v3 + 1) = 512;
    }
  }
  return result;
}
