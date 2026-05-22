/*
 * XREFs of McGenEventWriteUM @ 0x18002D624
 * Callers:
 *     McTemplateU0sqq @ 0x18002D688 (McTemplateU0sqq.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWriteUM(__int64 a1, __int64 a2, __int64 a3, struct _EVENT_DATA_DESCRIPTOR *a4)
{
  unsigned __int16 *v4; // rax
  EVENT_DESCRIPTOR *p_EventDescriptor; // rdx
  ULONG v6; // r8d
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+20h] [rbp-18h] BYREF

  v4 = (unsigned __int16 *)qword_180134088;
  p_EventDescriptor = (EVENT_DESCRIPTOR *)&EhmMessage;
  v6 = 4;
  if ( qword_180134088 )
  {
    a4->Ptr = qword_180134088;
    p_EventDescriptor = &EventDescriptor;
    a4->Size = *v4;
    a4->Reserved = 2;
    EventDescriptor = (EVENT_DESCRIPTOR)EhmMessage;
    EventDescriptor.Channel = 12;
  }
  else
  {
    v6 = 3;
    ++a4;
  }
  return EventWrite(MICROSOFT_WINDOWSPHONE_INPUT_Context, p_EventDescriptor, v6, a4);
}
