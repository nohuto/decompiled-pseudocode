/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1C012B330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CPTPProcessor *__fastcall CPTPProcessorFactory::GetProcessor(struct DEVICEINFO *a1)
{
  struct CPTPProcessor *result; // rax

  result = (struct CPTPProcessor *)*((_QWORD *)a1 + 59);
  if ( result )
    return (struct CPTPProcessor *)*((_QWORD *)result + 203);
  return result;
}
